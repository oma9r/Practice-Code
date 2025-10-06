#include <iostream>
#include "queue.h"   // include your header file

using namespace std;

int main() {
    cout << "=== Queue Test Program ===\n";

    // Test default constructor
    queue q1;
    cout << "Queue q1 created with default constructor.\n";

    // Test parameterized constructor
    queue q2(5);
    cout << "Queue q2 created with size 5.\n";

    // Test push
    cout << "\nPushing elements into q2:\n";
    for (int i = 1; i <= 5; i++) {
        if (!q2.isFull()) {
            q2.push(i * 10);
            cout << "Pushed " << i * 10 << endl;
        }
    }

    // Test front and back
    cout << "\nFront of q2: " << q2.front() << endl;
    cout << "Back of q2: " << q2.back() << endl;

    // Test size
    cout << "Size of q2: " << q2.size() << endl;

    // Test pop
    cout << "\nPopping 2 elements from q2:\n";
    q2.pop();
    q2.pop();
    cout << "Front after popping: " << q2.front() << endl;
    cout << "Size after popping: " << q2.size() << endl;

    // Test copy constructor
    cout << "\nTesting copy constructor:\n";
    queue q3(q2);
    cout << "q3 created as a copy of q2.\n";
    cout << "Front of q3: " << q3.front() << endl;
    cout << "Back of q3: " << q3.back() << endl;
    cout << "Size of q3: " << q3.size() << endl;

    // Test swap
    cout << "\nSwapping q1 and q3...\n";
    q1.swap(q1, q3);
    cout << "After swap: \n";
    if (!q1.isEmpty()) {
        cout << "q1 Front: " << q1.front() << ", Size: " << q1.size() << endl;
    } else {
        cout << "q1 is empty.\n";
    }
    if (!q3.isEmpty()) {
        cout << "q3 Front: " << q3.front() << ", Size: " << q3.size() << endl;
    } else {
        cout << "q3 is empty.\n";
    }

    // Test initializeQueue
    cout << "\nReinitializing q2...\n";
    q2.initilizeQueue();
    cout << "After initialization, q2 is empty: " << (q2.isEmpty() ? "true" : "false") << endl;

    cout << "\n=== End of Queue Test ===\n";
    return 0;
}
