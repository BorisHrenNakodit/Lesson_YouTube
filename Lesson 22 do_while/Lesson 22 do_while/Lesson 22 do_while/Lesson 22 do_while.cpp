// Lesson 22 do_while.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int sum = 0;
	cout << "Enter a rang of numbers\n";
	cin >> a;
	cin >> b;
	do
	{
		if (a % 2 != 0) {
			cout << a<<"\n";
			sum += a;
		}
		a++;

	} while (a < b);
	cout << "sum ="<<sum;
	return 0;
}
