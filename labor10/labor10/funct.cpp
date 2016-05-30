#include"stdafx.h"
#include"funct.h"

Tlist *tail, *cur;
Tlist *head(NULL);

void add(int a)
{
	Tlist *t = new Tlist;
	t->next = NULL;
	t->x = a;
	if (head != NULL)
	{
		t->prev = tail;
		tail->next = t;
		tail = t;
	}
	else{
		t -> prev = NULL;
		head = tail = t;
	}
	
}

void show()
{
	Tlist *t = head;
	while (t != NULL){
		std::cout << t->x << " ";
		t = t->next;
	}
	std::cout << "\n";
}

void delet()
{
	while (head)
	{
		tail = head->next;
		delete head;
		head = tail;
	}
}

void function()
{
	Tlist *t = head;
	Tlist *n = tail;
	int s = 0,a,b=0;
	while (t != NULL)
	{
		if (t->x == n->x)
			b = t->x*n->x;
		a = t->x*n->x;
		s += a;
		//std::cout << s << std::endl;
		t = t->next;
		n = n->prev;
	}
	std::cout << s+b << std::endl;
}