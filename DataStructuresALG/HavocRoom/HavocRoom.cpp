// HavocRoom.cpp : This file contains experiments to figure out how C++ works.
//NOTES:
//delete - deletes the memory alocated(pointer to that memory) but it keeps the variable avilable to reuse (not recomended).
//			- deletes the memory zone alocated that the variable is pointing to not the original point (memory leak);


#include <iostream>
#include "LList.h"
#include "Queue.h"

int main()
{
	
	//LList
	/*DS::LList firstList;
	firstList.push(10);
	firstList.display();
	firstList.push(20);
	firstList.push(40);
	firstList.push(80);
	firstList.push(100);
	firstList.display();
	std::cout << firstList.size;
	
	std::cout << " \n";
	std::cout << "That's ALL folks!!\n";*/
	
	//Queue
	DS::Queue qu;
	qu.display();
	qu.push(10);
	qu.display();
	std::cout << "Queue size: " << qu.size <<std::endl;
	int i = qu.pop();
	qu.display();
	std::cout << "Queue size: " << qu.size << std::endl;
	qu.push(20);
	qu.push(30);
	qu.push(140);
	qu.push(155);
	qu.push(55);
	qu.push(44);
	qu.display();
	int j = qu.pop();
	int k = qu.pop();

	std::cout << "Elements popped in order: " << i << " " << j << " " << k << std::endl;

	std::cout << "That's all folks. \n";

	

}

