#pragma once
#include "LList.h"

namespace DS
{
	/*struct NODE
	{
		int data;
		NODE* next;

		NODE() :data(0), next(nullptr) {}
		NODE(int n) :data(n), next(nullptr) {}

	};*/

	class Queue
	{	
		public:
		int size;
		NODE* first;
		NODE* last;

		Queue();
		~Queue();

		void push(int n);
		void display();
		int pop();
		int peekFirst();
		int peekLast();





	};
}

