#include "LList.h"

DS::LList::LList()
{ //Se initializeaza nodurile bine ?
}

DS::LList::~LList()
{
	NODE* del;
	del = head;
	while (del->next)
	{
		del = head->next;
		delete head;
		head = del;
	}
	delete head;
	
}
