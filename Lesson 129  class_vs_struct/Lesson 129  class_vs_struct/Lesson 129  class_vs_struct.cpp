// Lesson 129  class_vs_struct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;


class Myclass
{

	
public:
	int a = 22;
	void Print()
	{
		cout << "value_class" << endl;
	}
};



struct MyStruct
{
	int a = 22;
public:
	void Print()
	{
		cout << "value_struct" << endl;
	}
};




class Myclass_2:Myclass
{

};

struct MyStruct_2:MyStruct
{

};

int main()
{
	Myclass m;
	MyStruct ms;



	m.Print();
	//cout<< m.a << endl; //поумолчанию privet
	ms.Print();
	cout<< ms.a << endl;

	Myclass_2 m2;
	m2.a;        // наследрование privet поумолчанию
	MyStruct_2 ms2;
	ms2.a;       // наследрование public поумолчанию
  
}
