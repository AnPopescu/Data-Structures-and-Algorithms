
#include "Queue.h"
#include <iostream>

DS::Queue::Queue():size(0),first(nullptr),last(nullptr)
{
}

DS::Queue::~Queue()
{
	if (size != 0)
	{	
		NODE* temp;
		while (first)
		{	
			std::cout << "Element: " << first->data << " deleted.\n";
			temp = first->next;
			delete first;
			first = temp;
		}
	}
}

void DS::Queue::push(int n)
{
	NODE* value = new NODE(n);

	if (!first)
	{
		first = value;
		last = first;
		size++;
		return;
	}

	last->next = value;
	last = value;
	size++;
}

void DS::Queue::display()
{	
	NODE* current = first;
	std::cout << "Queue elements: [ ";
	while(current)
	{
		std::cout << current->data << ",";
		current = current->next;
	}
	std::cout << " ]\n";
}

int DS::Queue::pop()
{
	if (!first)
	{
		std::cout << "No elements in Queue. \n";
		return -1;
	}
	//Created temp in order not to delete from a pointer alocated on stack?
	int val = first->data;
	NODE* temp;
	temp = first->next;
	delete first;
	first = temp;
	size--;
	return val;
}

int DS::Queue::peekFirst()
{
	if (size == 0)
	{
		std::cout << "No elements in queue. \n";
		return -1;
	}
	return first->data;
}

int DS::Queue::peekLast()
{
	if (size == 0)
	{
		std::cout << "No elements in queue. \n";
		return -1;

	}
	return last->data;
}
