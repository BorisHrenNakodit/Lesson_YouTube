// Lesson STL 3  List.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>


using namespace std;



template<typename T>
void PrintList(const list<T>& lst) {
	for (auto i = lst.cbegin(); i != lst.cend(); i++)
	{

		cout << *i << '\n';
	}
	cout << '\n';
}


int main()
{

	list<int> myList = { 99,15,64,99,99,99,99,979,54,99 };
	list<int> myList2 = { 1,2,3,4,5,6 };
	/* myList.push_back(5);
	 myList.push_front(151);*/
	 //list<int>::iterator it = myList.begin();
	//auto it = myList.begin();

	//cout << myList.size() << endl << endl;
	//PrintList(myList);

	//auto in = myList.begin();

	//myList.insert(in, 111); // добавить число на позицию итератора
	//
	//PrintList(myList);

	//++in;
	//myList.erase(in); // удаляет элемент на позиции 

	//PrintList(myList);

	//myList.remove(99);// удаляет элементы равного значения
	//PrintList(myList);


	myList.assign(3, 7676);// удаляет и переинициализирует нужным колличеством заданных хэлементво
	PrintList(myList);

	myList.assign(myList2.begin(), myList2.end()); //копирование 2 листа в первый

		PrintList(myList);

	// myList.sort();  // Сортирует числа по возрастанию  

	//cout << "pop_front" << endl;
	//myList.pop_front();

   /* cout << "pop_back" << endl;
	myList.pop_back();*/

	/*cout << myList.size() << endl << endl;*/

   /* PrintList(myList);

	myList.unique();

	PrintList(myList);

	myList.reverse();

	PrintList(myList);

	myList.clear();*/
	//for (auto i = myList.begin(); i != myList.end(); i++)
	//{
	//    cout << *i << '\t';
	//}
	cout << endl;
}

