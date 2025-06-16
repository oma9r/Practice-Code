#include "linkedList.h"

using namespace std;


int main()
 {


    linkedList *list1;

    list1 = new linkedList();

    int x;
 
    while(x != -999)
   {
    cout << "Enter the data: " << endl;
  
    cin >> x;

    if(x == -999) break;

    else if(list1->insertItemFirst(x) ) cout << "add " << x << endl;
   
    }

    int ask;

    cout << "enter to search: " << endl;
    
    cin >> ask;

    if(list1->searchItem(ask)) cout << "We found it: " << ask << endl;

    cout << "ask again: " << endl;

    cin >> ask;

    if(list1->searchItem(ask)) cout << "We found it: " << ask << endl;
    
    else 
         cout << "We didn't found it! " << ask << endl;

    cout << "The Middle of the list " << list1->findMiddleItem() << endl;

    list1->printList();

    




      return 0;



  }