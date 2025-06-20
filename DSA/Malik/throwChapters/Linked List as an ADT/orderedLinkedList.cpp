#include "orderedLinkedList.h"

using namespace std;

 template <class Type>

  bool orderedLinkedList<Type>::search(const Type& searchItem) const
    {

          bool found = false;
          nodeType<Type> *current;

          current = first;

          while(current != NULL && !found)
           
             if(current->info >= searchItem)
               found = true;

             else
                  current = current->link;

          if(found)
                    found = (current->info == searchItem);

        return found;
     };


 template <class Type> 

  void orderedLinkedList<Type>::insert(const Type& newItem)
    {
       nodeType<Type> *current;
       nodeType<Type> *trailCurrent;
       nodeType<Type> *newNode;

       bool found;

       newNode = new nodeType<Type>;
       newNode->info = newItem;
       newNode->link = NULL;

       if(first == NULL)
       {
           first = newNode;
           last = newNode;
           count++;
       }

       else
        {
           current = first;
           found = false;

            while(current != NULL && !found)

                if(current->info >= newItem)
                    found = true;

                else
                 {
                    trailCurrent = current;
                    current = current->link;
                 }

                
             if(current == first)
               {
                  newNode->link = first;
                  first = newNode;
                  count++;
               }

              else
               {
                  trailCurrent->link = newNode;
                  newNode->link = current;
 
                   if(current == NULL)
                      last = newNode;

                count++;
               }

          }

      };//end function


     template <class Type>
       
     void orderedLinkedList<Type>::insertFirst(const Type& newItem)
      {
          insert(newItem);
      }

     template <class Type>

      void orderedLinkedList<Type>::insertLast(const Type& newItem)
       {
           insert(newItem);
       }


   template <class Type>

      void orderedLinkedList<Type>::deleteNode(const Type& deleteItem)
        {
            nodeType<Type> *current;
            nodeType<Type> *trailCurrent;
            bool found;

           if(first == NULL)
                             cout << "Can't delete from empty list." << endl;

           else
            {
               current = first;
               found = false;

              while(current != NULL && !found)
                   if(current->info >= deleteItem)
                      found = true;

                   else
                    {
                       trailCurrent = current;
                       current = current->link;

                    }

              if(current == NULL)
                    cout << "The item to be deleted is not in the list." << endl;

              else
                   if(current->info == deleteItem)
                     {
                        if(first == current)
                         {
                           first = first->link;

                           if(first == NULL)
                              last = NULL;

                           delete current;

                         }

                         else
                          {
                            trailCurrent->link = current->link;
                            
                             if(current == last)
                                 last = trailCurrent;

                            delete current;
                          }

                        count--;
                      }


                     else
                          cout << "The item to be deleted is not in the " << "list." << endl;

                 }

            }//end deleteNode
                             

     

  

     
                    


