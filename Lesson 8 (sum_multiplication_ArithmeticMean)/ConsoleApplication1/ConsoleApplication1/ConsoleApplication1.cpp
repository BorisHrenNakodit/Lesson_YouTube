// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Введите 3 числа ";
	cin >> a;
	cin >> c;
	cin >> b;
	
	

	cout << "sum= " << (a + b + c) << '\n' << "multiplacation = " << (a * b * c) << '\n'<< "ArithmeticMean = " << ((float)(a + b + c)) / 3 << '\n';
	b *=-1;
	cout << b;
}