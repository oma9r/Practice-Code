#pragma once

class node
{
public: 
	int id;
	node* next;
};


class list
{
	int count;
public: 
	node* head, * last;
	list();
	bool empty();
	int counter();
	void addfront(int id);
	void addback(int id);
	void add(int id);
	void search(int id);
	void reverse();
	void deleted(int id);
	void delete_list();
	void get_value(int index);
	void get_value_end(int index);
	void print();
};


