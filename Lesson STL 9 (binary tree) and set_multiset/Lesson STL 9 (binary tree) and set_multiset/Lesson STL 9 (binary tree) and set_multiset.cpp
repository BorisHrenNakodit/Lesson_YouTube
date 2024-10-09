// Lesson STL 9 (binary tree) and set_multiset.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include <set>

using namespace std;


int main()
{
	set<int> st{ 5,45,35,11,86 };
	st.insert(5);
	st.insert(5);
	//st.insert(12);
	//st.insert(4);
	//st.insert(-1);
	//auto it = st.find(10);

	//st.erase(4444);
	st.erase(4444);

	for (auto& item : st)
	{
		cout << item << endl;
	}



	int value = 5;

	if (st.find(value) != st.end())
	{
		cout << "number\t" << value << "\tfound" << endl;
	}
	else
	{

		cout << "number" << value << "not found" << endl;
	}


	multiset<int> Mulst = { 1,1,1,6,45,87,234 };
	Mulst.insert(5);
	Mulst.insert(5);
	Mulst.insert(5);
	


	auto it1 = Mulst.lower_bound(1); //возращает первое число равное 1
	auto it2 = Mulst.upper_bound(1);// возращает первое число больше 1


	auto a = Mulst.equal_range(1); // возращает диапазон от upper_bound до lower_bound
	for (auto& item : Mulst)
	{
		cout << item << endl;
	}
}

