#include "linkedList.h"

using namespace std;


node::node()
    {
       info = 0; 
      //*nullPtr = nullptr;
       link = nullptr;
       
    }

node::~node()
    {
       info = 0;
       link = nullptr;
    }

linkedList::linkedList()
  {
     first = nullptr;
     last = nullptr;
     count = 0;
  }

void linkedList::setFirstNode(node* node)
  {
     first = node;
  }

node* linkedList::getFirstNode()
 {
    return first;
 }

void linkedList::setLastNode(node* node)
 {
     last = node;
  }

node* linkedList::getLastNode()
  {
     return last;
   }

int linkedList::getSize()
  {
    return count;
  }

bool linkedList::insertItemFirst(int item)
 {
   node* newNode;
   newNode = new node;

   newNode->info = item;
   newNode->link = nullptr;

   if(first == nullptr)
    {
       first = newNode;
       last  = newNode;
       count++;

     return first;
    }
   else
    {
       newNode->link = first;
       first = newNode;
       count++;
       
      return first->link;
    } 
      
       
 };//end function insertItemFirst
 

bool linkedList::insertItemLast(int item)
 {
    node* newNode;
    newNode = new node;

    newNode->info = item;
    newNode->link = nullptr;

     if(first == nullptr)
    {
       first = newNode;
       last  = newNode;
       count++;

      return first->link;
    }
   else
    {
      last->link = newNode;
      last = newNode;
      count++;

      return first->link;
    } 
 }//end fuction insertItemLast

bool linkedList::insertItemFree(int location,int item)
{
   
    node* newNode;
    newNode = new node;
    node* current;
 

    newNode->info = item;
    newNode->link = nullptr;

    if(first == nullptr)
    {
       first = newNode;
       last  = newNode;
       count++;

      return first->link;
    }
    
    else
     {
        node* q;
        q = new node;

        current = first;

        for(int i=0;i<count;i++)
         {
            q = current;
            current = current->link;

            if(i == location)
             {
               if(i == 0)
                { 
                  newNode->link = first;
                  first = newNode;
                  count++;
                  
                  return newNode->link;
                }

                else if(i == count-1)
                 {
                    last->link = newNode;
                    last = newNode;
                    count++;

                  return newNode->link;
                 }

                else
                 {
                    char a;

                    cout << "Would add the item after the location or before?" << endl;
                    cin >> a;

                    if(a == 'b')
                     { 
                        newNode->link = current;
                        q->link = newNode;
                        count++;

                       return newNode->link;
                     }

                     else
                      {
                         newNode->link = current->link;
                         current->link = newNode;
                         count++;

                        return newNode->link;
                      }
                  }
 
              }// end if main

              else
               {
                  cout << "Invalid input, so we will add it to the last of the list" << endl;

                   return insertItemFirst(item);

               }
          }//end for loop

        }//end else big
     }//end function 

bool linkedList::searchItem(int item)
  {
     node* current;
     current = first;

     bool flag = false;


    for(int i=0;i<count;i++)
     {
       
         if(current->info == item)
           {
              
              flag = true;
              
              if(current->info == 0) return flag; 

              return current->info;
           }

         current = current->link;

     }

     if(!flag) return 0;
     else
          return 1;
   };

int linkedList::findMiddleItem()
 {
    
      int location = 0;

      if(count % 2 == 0)
      {
         location = count / 2;
      }

      else if(count % 2 == 1)
       {
          location = count /2;
          location++;
       }

       node* current;
 
       current = first;

      for(int i=0;i<count;i++)
       {
          if(location == i)
           {
             location = current->info;
             break;
           }
          current = current->link;
       }

      return location;
  }

void linkedList::printList()
  {
      node* current;

      current = first;

      cout << "The list: " << endl;
      cout << "The size of the list: " << count << endl;
      cout << "==========" << endl; 

      for(int i=1;i<count+1;i++)
       {
          cout << i << " - " << current->info << endl;
          current = current->link;
       }

    };


 linkedList::~linkedList()
  {
     node* current;

     current = first;

     while(current!= nullptr)
      {
         first = first->link;
         delete current;

         current = first;
      }

      delete first;
      delete last;
      count = 0;
   }

         
        
         
              
                     
                        
                    
                   
                   
                    
                   
                  
        
       
        


    
    
    

    



