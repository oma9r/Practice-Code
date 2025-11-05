#include <iostream> 
using namespace std;

class node 
{
  public: 
  int data;
  node *next;
};

class li1
{
  public: 
  node * head = new node;
  node * last = new node;
  int count;
  li1()
  {
    head = NULL;
    last = NULL;
    count = 0;
  }
  bool isfull(int max = 10)
  {
    return (count > max);
  }

  bool isempty()
  {
    return (head == NULL);
  }

  void add_first(int d1)
  {
    if(isfull())
    {
      cout << "sorry the list is full" << endl;
    }
    else
    {
      node * newnode = new node;
      newnode->data = d1;
      if(isempty())
      {
        head = newnode;
        last = newnode;
      }
      else
      {
        newnode->next = head;
        head = newnode;
      }
    }
  }

void print()
{
  node * current = new node;
  current = head;
  while(current!=NULL)
  {
    cout << current->data << endl;
    current = current->next;
  }
}
  


};

int main()
{
  li1 l1;
  //int MAX;
 // cout << "enter the count you want.Default the number is 10" << endl;
  //cin >> MAX;
  l1.isfull();
  l1.add_first(3);
  l1.add_first(4);
  l1.add_first(5);
  l1.print();





  return 0;
}