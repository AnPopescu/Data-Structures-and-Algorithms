// insertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

void inSort(int arr[], const int& n)
{
	int temp{ 0 };
	int j{ 0 };
	for (int i{ 1 }; i < n; i++)
	{	
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j+1] = temp;

	}


}

void showArray(int arr[], const int& n)
{
	std::cout << "Array elments: ";
	for (int i{ 0 }; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

}


int main()
{
	int n;
	std::cout << "Enter the number of elements: ";
	std::cin >> n;
	std::cout << "Enter array numbers: \n";
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cout << i << ":";
		std::cin >> arr[i];

	}
	showArray(arr, n);
	inSort(arr, n);
	showArray(arr, n);

	delete[] arr;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
