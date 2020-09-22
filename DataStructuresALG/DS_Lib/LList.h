#pragma once

namespace DS
{

	struct NODE
	{
		int data;
		NODE* next;

		NODE() :data(0), next(nullptr){}
		NODE(int n) :data(n), next(nullptr) {}

	};



	class LList
	{
	public:
		NODE* head;
		NODE* tail;
		int size;
		LList();
		~LList();

		void push(int n);
		void display();
		

		
	};

}