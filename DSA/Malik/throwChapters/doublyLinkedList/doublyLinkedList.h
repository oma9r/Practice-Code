

template <class Type> 

struct nodeType
  {

       Type info;
       nodeType<Type> *next;
       nodeType<Type> *back;

  };


 template <class Type>

 class doublyLinkedList
   {

      public: 
              const doublyLinkedList<Type>& operator=(const doublyLinkedList<Type> &);

              void initializeList();

              bool isEmptyList() const;

              void destroy();

              void print() const;

              void reversePrint() const;

              int length() const;

              Type front() const;

              Type back() const;

              bool search(const Type& searchItem) const;

              void insert(const Type& insertItem);

              void deleteNode(const Type& deleteItem);

              doublyLinkedList();

              doublyLinkedList(const doublyLinkedList<Type>& otherList);

              ~doublyLinkedList();

         protected: 
                    int count;
                    nodeType<Type> *first;
                    nodeType<Type> *last;

        private: 
                  void copyList(const doublyLinkedList<Type>& otherList);

    };

              

              