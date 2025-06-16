#include "RLinkedList.h"
using namespace std;


node::node()
  {
     this.info = 0;
     this.link = nullptr;
  };

node::~node()
  {
     this.info = 0;
     this.link = nullptr;
  };

RLinkedList::RLinkedList()
  {
     first = nullptr;
     last = nullptr;

     count = 0;
  }

bool RLinkedList::isEmpty()
{
   return first;
}

void RLinkedList::buildList()
  {
     int x;

     while(true)
      {
          cout << "Enter the data: ";
          cin >> x;

          if(x == -999)break;

          node* newNode;
          newNode->info = x;
          newNode->link = nullptr;

         if(first == nullptr)
          {
            first = newNode;
            last  = newNode;
            count++;
            
          }

         else
          {
            last->link = newNode;
            newNode = last;
            count++;
          }
      }//end while
  };

void RLinkedList::reverseList()
 {
    node *current,*preCurrent,*q;

    if(this.isEmpty())
      {
        cout << "The list is Empty" << endl;
        return;
      }
   
    else if(this.count == 1)
      {
         cout << "The list contain one item, the size is " << this.count << endl;
      }

    else
      {
         preCurrent = first;

         q = preCurrent;
  
         current = preCurrent->link;

         preCurrent->link = nullptr;

         while(current != nullptr)
          {
            preCurrent = current;
            
            current = current->link;

            preCurrent->link = q;

            q = preCurrent;
          }

          last = first;

          first = preCurrent;

          delete current;
          delete preCurrent;
          delete q;
        }
  };

void RLinkedList::printList()
 {
    int i=1;
    node *current;

    current = first;

    cout << "Print List: " << endl;

    cout << "Size: " << this.count << endl;

    cout << "=================" << endl;

   while(current!=nullptr)
    {
      cout << i << "- " << current->info << endl;

      current = current->link;
    }

    cout << "The list printing is done!" << endl;
  };

int RLinkedList::getCount()
 {
    return this.count;
  }

void RLinkedList::setHeadNode(node* first);
 {
    this.first = first;
 }

node* RLinkedList::getHeadNode()
 {
    return first;
  };
  
     
           
             

            

            
         
         
    

          
             
             
             

     


