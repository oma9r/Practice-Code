#include <iostream> 

using namespace std;

  struct nodeType
    {
        int info;
        nodeType * link;
     };


int main()
  {

      nodeType *first,*last,*newNode;
      int num;
      char answer;

      first = NULL;
      last = NULL;


    do{

      cout << "Please enter num: " << endl;

      cin >> num;

      newNode = new nodeType;

      newNode->info = num;
      newNode->link = NULL;

      if(first == NULL)
       {
          first = newNode;
          last  = newNode;
       }

      else
       {
          last->link = newNode;
          last       = newNode;
        
       } 

      cout << "Would you more?" << endl;
      cin >> answer;

    }while(answer != 'n');


    nodeType *p;
    p = first;

    while(p != NULL)
      {
           cout << p->info << endl;
           p = p->link;
      }







   return 0;
    };