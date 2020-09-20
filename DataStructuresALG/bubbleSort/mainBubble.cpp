#include <iostream>


void showArray(int arr[], const int& n)
{
	std::cout << "Array elments: ";
	for (int i{ 0 }; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

}

void bsArray(int arr[],const int& n)
{	
	int temp{ 0 };
	for (int i{ 0 }; i < n-1; i++)
	{
		for (int j{ i + 1 }; j < n  ; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
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
		std::cout << i <<":";
		std::cin >> arr[i]; 
		
	}
	showArray(arr, n);
	bsArray(arr, n);
	showArray(arr, n);

	delete[] arr;

}
