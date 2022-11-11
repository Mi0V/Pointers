#include <iostream>
void FillRand(int arr[], const int SIZE);
void Print(int arr[], const int SIZE);
//int EVEN(int even_arr[], const int even);
//int ODD(int odd_arr[], const int odd);

void main()
{	
	
	int const SIZE = 10;
	int even = 0;
	int odd = 0;
	//std::cout << "¬ведите размер массива: "; std::cin >> SIZE;
	int arr[SIZE];
	FillRand(arr, SIZE);
	Print(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 == 0) even++;
		else odd++;
	}
	int* even_arr = new int[even];
	int* odd_arr = new int[odd];

	for (int i = 0, j = 0, k = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 == 0)even_arr[j++] = arr[i];
		else odd_arr[k++] = arr[i];

	}
	Print(even_arr, even);
	Print(odd_arr, odd);

	delete[] even_arr;
	delete[] odd_arr;

}

void FillRand(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
