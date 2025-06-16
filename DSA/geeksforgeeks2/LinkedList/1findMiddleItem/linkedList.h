#include <iostream> 
using namespace std;

class node
 {
    public: 
            int info;
            node* link;
            node* nullPtr;

            node();
            ~node();
 };



class linkedList
 {

    private: 
             node* first;
             node* last;
             int count;

    public: 
            linkedList();
            void setFirstNode(node* node);
            
            node* getFirstNode();

            void setLastNode(node* node);

            node* getLastNode();

            int getSize();

            bool insertItemFirst(int item);
            
            bool insertItemLast(int item);

            bool insertItemFree(int location,int item);
 
            bool searchItem(int item);

            int findMiddleItem();

            void printList();

            ~linkedList();
 };
    
