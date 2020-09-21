#include "LList.h"
#include <iostream>

DS::LList::LList():size(0),head(nullptr),tail(nullptr)
{ //Se initializeaza nodurile bine ?
}

DS::LList::~LList()
{
	NODE* del;
	del = head;
	while (del->next)
	{
		del = head->next;
		std::cout << "Element: " << head->data << " deleted.\n";
		delete head;
		head = del;
	}
	std::cout << "Element: " << head->data << " deleted.\n";
	delete head;

	
}

void DS::LList::push(int n)
{
	
		NODE* item = new NODE(n);

		if (head == nullptr)
		{	
			std::cout << "Element: " << item->data << " added.\n";
			head = item;
			tail = item;
			size++;
			return;
		}
		std::cout << "Element: " << item->data << " added.\n";
		tail->next = item;
		tail = item;
		size++;
	
}

void DS::LList::display()
{
	NODE* current;
	current = head;
	std::cout << "LinkedList:[ ";
	while (current)
	{
		std::cout << current->data << " ,";
		current = current->next;
	}
	std::cout << " ].\n";
}
