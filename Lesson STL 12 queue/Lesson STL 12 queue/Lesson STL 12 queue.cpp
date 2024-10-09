// Lesson STL 12 queue.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <queue>
#include <list>
#include <vector>

using namespace std;


/// DLL STL
/// queue
/// 
/// 
/// priority_queue
/// DLL STL
using namespace std;

int main()
{
	// НЕ РАБОАТЕТ С VECTOR ///
	queue<int,list<int>> qu;
	qu.push(56);
	qu.push(4);
	qu.push(7);
	qu.push(99);
	qu.emplace(98);

	//auto a = qu._Get_container();
	//cout << qu.front() << endl;
	//cout << qu.back() << endl;

	//qu.pop();
	//cout << qu.front() << endl;

	//while (!qu.empty())
	//{
	//	cout << qu.front() << endl;
	//	cout << "element count " << qu.size() << endl;
	//	qu.pop();		
	//}
	//cout << "element count " << qu.size() << endl;

	// НЕ РАБОАТЕТ С LIST ///
	priority_queue<int> qu2;
	qu2.push(5);
	qu2.push(1);
	qu2.push(7);
	qu2.push(9);

	/////    сортирует элементы в порядке убывания /////


	while (!qu2.empty())
	{
		cout << qu2.top() << endl;
		cout << "element count " << qu2.size() << endl;
		qu2.pop();
	}
	return 0;
}
