#include <iostream> 


class node
  {
     public:
     int info;
     node *link;

     node();
     ~node();
  };


class RLinkedList
 {
    private: 
             node *first,*last;
             int count;

    public: 
             RLinkedList();
      
             bool isEmpty();

             void buildList();//backward insert

             void reverseList();

             void printList();

             int getCount();

             void setHeadNode(node* first);

             node* getHeadNode();

             

             ~RLinkedList();

 };

