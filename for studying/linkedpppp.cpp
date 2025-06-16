#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class STUDENT {
public:
    std::string name;
    std::string university;
    int id;
    std::string address;
    double GPA;

    // Default constructor
    STUDENT() : name(""), university(""), id(0), address(""), GPA(0.0) {}

    // Constructor with parameters
    STUDENT(std::string name, std::string university, int id, std::string address, double GPA)
        : name(name), university(university), id(id), address(address), GPA(GPA) {}

    // Copy constructor
    STUDENT(const STUDENT& other)
        : name(other.name), university(other.university), id(other.id), address(other.address), GPA(other.GPA) {}

    // Assignment operator overload
    STUDENT& operator=(const STUDENT& other) {
        if (this == &other)
            return *this;

        name = other.name;
        university = other.university;
        id = other.id;
        address = other.address;
        GPA = other.GPA;
        return *this;
    }

    // Destructor
    ~STUDENT() {}
};

class CLASS {
private:
    struct Node {
        STUDENT student;
        Node* next;
        Node(const STUDENT& s) : student(s), next(nullptr) {}
    };

    Node* head;
    std::string class_name;
    int count;

public:
    // Default constructor
    CLASS() : head(nullptr), class_name(""), count(0) {}

    // User-defined constructor that takes an array of students
    CLASS(STUDENT* studentsArray, int numStudents, std::string class_name);

    // Copy constructor
    CLASS(const CLASS& other);

    // Assignment operator overload
    CLASS& operator=(const CLASS& other);

    // Destructor
    ~CLASS();

    // Overload operator +; CLASS + STUDENT
    CLASS operator+(const STUDENT& s) const;

    // Overload operator +; CLASS + CLASS
    CLASS operator+(const CLASS& other) const;

    // Overload operator -; CLASS - STUDENT
    CLASS operator-(const STUDENT& s) const;

    // Overload operator +=; CLASS += CLASS and CLASS += STUDENT
    CLASS& operator+=(const CLASS& other);
    CLASS& operator+=(const STUDENT& s);

    // Function to set the name of the university
    void setUniversityName(const std::string& universityName);

    // Overload operator << to print the students with their information line by line
    friend std::ostream& operator<<(std::ostream& os, const CLASS& cls);

    // Overload operator >> to read students from a file
    friend std::istream& operator>>(std::istream& is, CLASS& cls);

    // Function to calculate the average GPA of the students in the class
    double getAverage() const;

    // Overload > to compare the average GPA between two Classes
    bool operator>(const CLASS& other) const;
};

CLASS::CLASS(STUDENT* studentsArray, int numStudents, std::string class_name)
    : head(nullptr), class_name(class_name), count(0) {
    // Add students to the linked list in ascending order of their IDs
    for (int i = 0; i < numStudents; i++) {
        *this += studentsArray[i];
    }
}

CLASS::CLASS(const CLASS& other)
    : head(nullptr), class_name(other.class_name), count(other.count) {
    // Copy the linked list of students from the other class
    Node* current = other.head;
    Node* last = nullptr;
    while (current != nullptr) {
        Node* newNode = new Node(current->student);
        if (last == nullptr) {
            head = newNode;
        } else {
            last->next = newNode;
        }
        last = newNode;
        current = current->next;
    }
}

CLASS& CLASS::operator=(const CLASS& other) {
    if (this == &other)
        return *this;

    // Clear the current linked list
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;

    // Copy the linked list from the other class
    current = other.head;
    Node* last = nullptr;
    while (current != nullptr) {
        Node* newNode = new Node(current->student);
        if (last == nullptr) {
            head = newNode;
        } else {
            last->next = newNode;
        }
        last = newNode;
        current = current->next;
    }

    class_name = other.class_name;
    count = other.count;

    return *this;
}

CLASS::~CLASS() {
    // Clear the linked list
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

CLASS CLASS::operator+(const STUDENT& s) const {
    CLASS newClass(*this);
    newClass += s;
    return newClass;
}

CLASS CLASS::operator+(const CLASS& other) const {
    CLASS newClass(*this);
    newClass += other;
    return newClass;
}

CLASS CLASS::operator-(const STUDENT& s) const {
    CLASS newClass(*this);
    Node* current = newClass.head;
    Node* prev = nullptr;

    // Find the student with the given ID and remove it from the linked list
    while (current != nullptr) {
        if (current->student.id == s.id) {
            if (prev != nullptr) {
                prev->next = current->next;
            } else {
                newClass.head = current->next;
            }
            delete current;
            newClass.count--;
            break;
        }
        prev = current;
        current = current->next;
    }

    return newClass;
}

CLASS& CLASS::operator+=(const CLASS& other) {
    Node* current = other.head;
    while (current != nullptr) {
        *this += current->student;
        current = current->next;
    }
    return *this;
}

CLASS& CLASS::operator+=(const STUDENT& s) {
    Node* newNode = new Node(s);
    if (head == nullptr || head->student.id > s.id) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr && current->next->student.id < s.id) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    count++;
    return *this;
}

void CLASS::setUniversityName(const std::string& universityName) {
    for (Node* current = head; current != nullptr; current = current->next) {
        current->student.university = universityName;
    }
}

std::ostream& operator<<(std::ostream& os, const CLASS& cls) {
    os << "Class: " << cls.class_name << std::endl;
    os << "Number of students: " << cls.count << std::endl;
    os << "Students Information:" << std::endl;

    for (const CLASS::Node* current = cls.head; current != nullptr; current = current->next) {
        os << "Name: " << current->student.name << std::endl;
        os << "University: " << current->student.university << std::endl;
        os << "ID: " << current->student.id << std::endl;
        os << "Address: " << current->student.address << std::endl;
        os << "GPA: " << std::fixed << std::setprecision(2) << current->student.GPA << std::endl;
        os << "-------------------" << std::endl;
    }

    return os;
}

std::istream& operator>>(std::istream& is, CLASS& cls) {
    int numStudents;
    is >> numStudents;
    for (int i = 0; i < numStudents; i++) {
        std::string name, university, address;
        int id;
        double GPA;
        is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(is, name);
        std::getline(is, university);
        is >> id;
        is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(is, address);
        is >> GPA;

        STUDENT newStudent(name, university, id, address, GPA);
        cls += newStudent;
    }
    return is;
}

double CLASS::getAverage() const {
    double totalGPA = 0.0;
    for (const Node* current = head; current != nullptr; current = current->next) {
        totalGPA += current->student.GPA;
    }

    if (count > 0) {
        return totalGPA / static_cast<double>(count);
    } else {
        return 0.0;
    }
}

bool CLASS::operator>(const CLASS& other) const {
    double thisAvg = getAverage();
    double otherAvg = other.getAverage();
    return thisAvg > otherAvg;
}



int main() {
    // Example usage of the CLASS and STUDENT classes

    // Create some student objects
    STUDENT s1("Alice", "University A", 12345, "123 Main St", 3.5);
    STUDENT s2("Bob", "University B", 67890, "456 Elm St", 3.8);
    STUDENT s3("Charlie", "University C", 54321, "789 Oak St", 3.2);

    // Create a class and add students to it
    CLASS class1;
    class1 += s1;
    class1 += s2;

    // Create another class and add students to it
    CLASS class2;
    class2 += s2;
    class2 += s3;

    // Add two classes together (merge and sort by ID)
    CLASS mergedClass = class1 + class2;

    // Print the merged class
    std::cout << mergedClass;

    // Remove a student from the merged class
    mergedClass = mergedClass - s1;

    // Print the updated merged class
    std::cout << mergedClass;

    // Set the university name for all students in the merged class
    mergedClass.setUniversityName("Merged University");

    // Print the updated merged class
    std::cout << mergedClass;

    // Get the average GPA of the merged class
    double averageGPA = mergedClass.getAverage();
    std::cout << "Average GPA: " << averageGPA << std::endl;

    // Read students from a file and create a new class
    CLASS classFromFile;
    std::ifstream inputFile("students.txt");
    inputFile >> classFromFile;
    inputFile.close();

    // Print the class read from the file
    std::cout << classFromFile;

    // Compare the average GPAs of two classes
    if (classFromFile > mergedClass) {
        std::cout << "The class read from the file has a higher average GPA." << std::endl;
    } else {
        std::cout << "The merged class has a higher average GPA." << std::endl;
    }

    return 0;
}
