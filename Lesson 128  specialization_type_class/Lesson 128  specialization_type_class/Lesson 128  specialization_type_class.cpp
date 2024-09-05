// Lesson 128  specialization_type_class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;




template<typename T>
class Printer
{
public:
	void Print(T value)
	{
		cout << value << endl;
	}


private:
	T value;
};

template<>
class Printer<string>
{
public:
	void Print(string value)
	{
		cout << "!!!" << value <<"!!!" << endl;
	}
};





int main()
{
	
	Printer<string> a;
	a.Print("Hello World");


	Printer<int> v;
	v.Print(123);
    

	Printer<char> c;
	c.Print(123);
}

