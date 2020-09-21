// HavocRoom.cpp : This file contains experiments to figure out how C++ works.
//NOTES:
//delete - deletes the memory alocated(pointer to that memory) but it keeps the variable avilable to reuse (not recomended).
//			- deletes the memory zone alocated that the variable is pointing to not the original point (memory leak);


#include <iostream>
#include "LList.h"

int main()
{
	
	
	DS::LList firstList;
	firstList.push(10);
	firstList.display();
	firstList.push(20);
	firstList.push(40);
	firstList.push(80);
	firstList.push(100);
	firstList.display();
	std::cout << firstList.size;
	
	std::cout << " \n";
	std::cout << "That's ALL folks!!\n";
	

}

