#include <iostream> 

using namespace std;

struct nodeType{

    int info;
    nodeType *link;
 };

nodeType* buildListBackward()
  {

         nodeType *first,*newNode;
         int num;

        cout << "Enter a list of integers ending with -999." << endl;
        cin >> num;
        first = NULL;
 
        while(num != -999)
         {
              newNode = new nodeType;
              newNode->info = num;
              newNode->link = first;
          
              first = newNode;

              cin >> num;

         }

      return first;

   };


  void print(nodeType *printList)
    {
       nodeType *p;
       p = printList;
       int count = 0;

       while( p != NULL)
        {
           cout << p->info << endl;
           ++count;
           p = p->link;
        }

        cout << "The size of the list" << cout << endl;
     };


int main()
  {
      nodeType *p;
      p =  buildListBackward();

      print(p);

    return 0;
  };

       
           