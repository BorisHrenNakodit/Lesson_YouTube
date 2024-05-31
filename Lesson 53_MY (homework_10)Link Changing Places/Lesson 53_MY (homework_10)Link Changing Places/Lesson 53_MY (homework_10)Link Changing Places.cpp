// Lesson 53_MY (homework_10)Link Changing Places.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

template<typename T>
void foo(T& La, T& Lb);

int main()
{
	int a = 22, b = 5;
	double i = 111, z = 555;
	
	foo(a, b);




	cout << "This is A =" << &a << '\n';
	cout << "This is B =" << &b << '\n';
	cout << "This is A =" << a << '\n';
	cout << "This is B =" << b << '\n';
	cout << "=============================================" << "\n\n\n";
	
	
	
	
	foo(i, z);




	cout << "This is I =" << &i << '\n';
	cout << "This is Z =" << &z << '\n';
	cout << "This is I =" << i << '\n';
	cout << "This is Z =" << z << '\n';
}








template<typename T>
void foo(T& La, T& Lb)
{
	cout << "This is Adres La=" << &La << '\n';
	cout << "This is Adres Lb =" << &Lb << '\n';
	cout << "=============================================" << "\n\n\n";



	int a = La;
	cout << "This is AdresLocal a =" << &a << '\n';
	cout << "This is A =" << La << '\n';
	La = Lb;
	cout << "This is Adres La2 =" << &La << '\n';
	cout << "This is B =" << Lb << '\n';
	Lb = a;
	cout << "This is Adres Lb2 =" << &La << '\n';
	cout << "This is Adres La2 =" << &La << '\n';
	cout << "This is  Lb2 =" << La << '\n';
	cout << "This is  La2 =" << La << '\n';
}