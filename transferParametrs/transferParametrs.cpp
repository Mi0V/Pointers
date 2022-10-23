#include <iostream>

void transfer(int* a, int* b);
void main()
{
	int a = 2, b = 3;
	std::cout << a << "\t" << b << std::endl;
	transfer(&a, &b);
	std::cout << a << "\t" << b << std::endl;
}
void transfer( int* a, int* b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
	std::cout << a << "\t" << b << std::endl;
}