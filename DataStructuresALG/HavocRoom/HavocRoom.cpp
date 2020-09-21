// HavocRoom.cpp : This file contains experiments to figure out how C++ works.
//NOTES:
//delete - deletes the memory alocated(pointer to that memory) but it keeps the variable avilable to reuse (not recomended).
//			- deletes the memory zone alocated that the variable is pointing to not the original point (memory leak);


#include <iostream>

int main()
{
	int* i = new int(10);
	int* j = new int(20);
	int* t = new int(30);
	*i = 12;
	std::cout << *i;
	t = i;
	i = j;
	j = t;
	
	delete t;

	
	std::cout << *i;

	delete j;
	delete t;
}

