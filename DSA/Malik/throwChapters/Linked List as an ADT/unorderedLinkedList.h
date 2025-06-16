#include "linkedListType.h"
using namespace std;

template <class Type>

 class unorderedLinkedList:: public linkedListType<Type>
   {
      
     public: 
       bool search(const Type& searchItem) const;

       void insertFirst(const Type& newItem);

       void insertLast(const Type& newItem);

       void deleteNode(const Type& deleteItem);

   };