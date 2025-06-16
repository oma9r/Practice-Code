#include <iostream> 
using namespace std;

class n
{
public:
    int num;
    n* next;
};

class link
{
public:
    n* head, * last;
    void insert();
    void print();

};

void link::insert()
{
    n* newNode = new n;
    int num1;
    cout << "add ";
    cin >> num1;
    newNode->num = num1;
    if (head == NULL)
    {
        head = newNode;
        last = newNode;
    }
    else
    {
        last->next = newNode;
        last = newNode;
    }

}

void link::print()
{
    n* current = new n;
    current = head;
    while (current != NULL)
    {
        cout << current->num << endl;
        current = current->next;
    }
}

int main()
{

    link ob;

    ob.insert();
    ob.insert();
    ob.insert();
    ob.insert();
    ob.insert();
    ob.print();






    return 0;
}