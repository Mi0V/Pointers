#include <iostream>

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int& ra = a;
	int a =+ 3;
}