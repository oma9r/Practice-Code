#include "list.h"
#include <iostream>
using namespace std;

list::list()
{
	head = last = new node;
	head = last = NULL;
	count = 0;
};

bool list::empty()
{
	return (head == NULL);
};

int list::counter()
{
	return list::count;
};

void list::addback(int id)
{
	node* newnode = new node;
	newnode->next = NULL;
	newnode->id = id;
	count++;
	if (list::empty())
	{
		head = newnode;
		last = newnode;
	}

	else
	{
		
		last->next = newnode;
		last = newnode;
	};
};

void list::addfront(int id)
{
	node* newnode = new node;
	newnode->next = NULL;
	newnode->id = id;
	count++;
	if (list::empty())
	{
		list::head = list::last = newnode;
	}
	else
	{
		newnode->next = head;
		head = newnode;
	};
};

void list::add(int id)
{
	int id1;
	cout << "enter the id" << endl;
	cin >> id1;
	node* newnode = new node;
	newnode->id = id1;
	newnode->next = NULL;
	count++;
	if (empty())
	{
		list::head = list::last = newnode;
	}
	else
	{
		int flag = -1;
		node* current = new node;
		node* q = new node;
		current = head;
		while (current)
		{
			if (current->id == id)
			{
				q = current;
				newnode->next = q->next;
				q->next = newnode;
				flag++;
				cout << "done!" << endl;
			}
			current = current->next;
		}

		if (flag) cout << "invalid add" << endl;
	}

};

void list::search(int id)
{
	node* current = new node;
	current = head;
	int flag = -1;
	while (current)
	{
		if (current->id == id)
		{
			cout << "the id is: " << id << endl;
			flag++;
		}

		current = current->next;
	};
	if (flag) cout << "invalid" << endl;
};

void list::reverse()
{
	node* current, * prev, * next;
	current = prev = next = new node;
	prev = NULL;
	current = head;
	next->next = NULL;
	next = current->next;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		
	};

	head = prev;



};

void list::deleted(int id)
{
	if (list::empty())
	{
		cout << "the list is empty, invalid delete" << endl;
	};
	int flag = -1;
	node* current = new node;
	current->next = NULL;
	node* p = new node;
	//p->next = NULL;
	//p = NULL;
	current = head;
	node* q = new node;
	while (current)
	{
		if (current->id == id)
		{
			q = p->next;
			p->next = q->next;
			flag++;
			delete q;
			//cout << p->id << endl;
			break;
			
		}
		p = current;
		current = current->next;
		
	};
	if (!flag) count--;
	if (flag) cout << "Invalid delete,try again" << endl;
};

void list::delete_list()
{
	if (list::empty())
	{
		cout << "the list is empty" << endl;
		return;
	};
	node* q = new node;
	while (head)
	{
		q = head;
		head = head->next;
		delete q;
	};
	count = 0;
};

void list::get_value(int index)
{
	if (empty())
	{
		cout << "the list is empty" << endl;
		return;
	};

	node* current = new node;
	current = head;

	for (int i = 1; current; i++)
	{
		if (i == index)
		{
			cout << "the index: " << index << " is: " << current->id << endl;
		};
		current = current->next;
	}
};

void list::get_value_end(int index)
{
	int flag = -1;
	if (empty())
	{
		cout << "the list is empty" << endl;
		return;
	};

	node* current = new node;
	current = head;

	for(int i=0;i < count;i++)
	{
		if (i == count - index )
		{
			cout << "the index: " << index << " is: " << current->id << endl;
			flag++;
			//break;
		};
		current = current->next;
	}
	if (flag) cout << "invalid operation, try again" << endl;
};

void list::print()
{
	if (list::empty())
	{
		cout << "the list is empty" << endl; 
		return;
	}
	node* current = new node;
	current->next = NULL;
	current = head;
	while (current!=NULL)
	{
		cout << current->id << endl;
		current = current->next;
	}
};
