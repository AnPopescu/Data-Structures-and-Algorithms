#pragma once

namespace DS
{

	struct NODE
	{
		int data;
		NODE* next;

		NODE() :data(0), next(nullptr){}

	};



	class LList
	{
	public:
		NODE* head;
		NODE* tail;
		LList();
		~LList();

		void push(int n)
		{
			if(head)
		}

		
	};

}