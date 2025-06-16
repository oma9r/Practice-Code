#include "linkedListIterator.h"



  template <class Type>
   class linkedListType
    {
          const linkedListType<Type>& operator=(const linkedListType<Type>&);

          void initializeList();

          bool isEmptyList();

          void print() const;

          int length() const;

          void destroyList();

          Type front() const;

          Type back() const;

          virtual void insertFirst(const Type& newItem) = 0;

          virtual void insertLast(const Type& newItem) = 0;

          virtual void deleteNode(const Type& deleteItem) = 0;

          linkedListItertor<Type> begin();

          linkedListItertor<Type> end();

          linkedListType();
 
          linkedListType(const linkedListType<Type>& otherList);

          ~linkedListType();

          protected: 
                     int count;

                     nodeType<Type> *first;
                     nodeType<Type> *last;
          private: 
                   void copyList(const linkedListType<Type>& otherList);
    };

         
          
       


