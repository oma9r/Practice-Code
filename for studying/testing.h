#include <iostream> 
using namespace std;

struct nodeType
{
  int info;
 nodeType *link;
 

};

static nodeType *first,*newNode,*last,*tmp,*current;
 nodeType f1()
{                                             //begging of f1
 
  int num;
  cout << "enter";
  first = NULL;
  cin >> num;

  while ((num >= 0) && (num <=100))
  {                                    // begging of while
    newNode = new nodeType;
    newNode ->info = num;
    newNode ->link = NULL;
  
  if(first == NULL)
  {
    newNode = first;
    newNode = last;
  }

  else 
  {
    last->link = newNode;
    last = newNode;
  }

  cin >> num;

  } // end of while

  cout << "that's good thanks!";


  return *first;


} // end of the function f1

nodeType f2()
{
   
   int num;
   cout << "enter" << endl;
   cin >> num;

   while((num >= 0) && (num <=100))
   {
     newNode = new nodeType;
     newNode->info = num;
     newNode->link = first;
     first = newNode;
     cin >> num;
   }

   return first;


}


nodeType dele()
{
   
   tmp = new nodeType;

   while(first == NULL)
   {
    
    tmp = first;
    first =  first->link;
    delete tmp;
   }

   last = NULL;

   return first;
}

nodeType print()
{

current = first;

  while(current != NULL)
{
   cout << current->info << endl;
   current = current->link;

}
return first;
}







// end of f2









/*
int num;
 nodeType *first,*last,*newNode;
  first = NULL;
  last = NULL;
  cout << ""
  cin >> num;
  

  newNode = new nodeType;
  newNode->info = num;
  newNode->link = NULL;
  if(first == NULL)
  {
    first = newNode;
    last = newNode;
  }

  else 
  {
    last->link = newNode;
    last = newNode;
  }
  */