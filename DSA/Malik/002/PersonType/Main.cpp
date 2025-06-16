#include <iostream>
#include "personType.h"

int main()
{
    personType p1;
    p1.setName("Omar", "Abumazen");
    p1.print();

    personType p2;
    p2.setFirstName("Ahmad");
    p2.setLastName("Ali");
    p2.print();
    personType p3("Haya", "sammana");
    p3.print();

  
    cout << "================" << endl;
    string firstName, lastName;
    cout << "please enter the first name: " << endl;
    cin >> firstName;
    cout << "please enter the last name: " << endl;
    cin >> lastName;

    personType p4(firstName, lastName);
    p4.print();
    



    
}
