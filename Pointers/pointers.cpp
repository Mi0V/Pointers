#include <iostream>

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	std::cout << "Hellow pointers!" << std::endl;
	int a = 2;
	int* pa = &a;
	std::cout << a << std::endl; // Вывод значения переменной a на экран
	std::cout << &a << std::endl; // Взятие переменной а при выводе
	std::cout << pa << std::endl; // Вывод на экран адреса переменной а, хранящегося в указателе pa
	std::cout << *pa << std::endl; //Разыменование указателя pa и получение значения по адресу  
	int* pb;
	int b = 3;
	pb = &b;
#endif // POINTERS_BASICS

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	std::cout << arr << std::endl;
	std::cout << *arr << std::endl;
	for (int i = 0; i < n; i++)
	{

		std::cout << *(arr + i) << "\t";
	}
	std::cout << std::endl;
}