// Lesson STL 11 stack.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<list>
#include<vector>
#include<deque>
#include<stack>
using namespace std;

int main()
{


	stack<int,list<int>>   st;
	
	
	
	st.push(2);
	st.push(43);
	st.push(3);//создает копию а потом переносит в коллекцию

	st.emplace(9);//создает объект который м сразу помещаем в коллекцию (быстрее и экономичнее)


	auto a = st._Get_container();


	while(!st.empty())
{
	cout << st.top() << endl;
	st.pop();
}


	// cout << a[2] << endl; //если у коллекции перегружен [] то работает



	//st.size();// колличество элементво
	//st.empty(); // есть ли элементы в коллекции возращает bool;

	//st.pop();// убирает последний элемент;
	//st.top();// показывает какой последний элементв  stack;

	//cout << st.top() << endl << st.size() << endl<< st.empty()<<endl << endl << endl;

	//while(!st.empty())
	//{
	//	cout << st.top() << endl;
	//	st.pop();
	//}









	return 0;
}



