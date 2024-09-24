// Lesson 137 foreach.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<typename T>
void PrintList(const list<T>& lst) {

	for (const auto& i : lst)
	{
		cout << i << '\n';
	}


	/*for (auto i = lst.cbegin(); i != lst.cend(); i++)
	{

		cout << *i << '\n';
	}*/
	cout << '\n';
}

int main()
{
	//int arr[]={ 5,11,94,99,44 };
	list<int> a={ 5,11,94,99,44 };

	PrintList(a);

	for(auto &var: a)
	{		
		var = 1;
	}

	PrintList(a);
	
}