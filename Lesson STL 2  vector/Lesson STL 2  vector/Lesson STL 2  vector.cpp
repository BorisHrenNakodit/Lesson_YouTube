// Lesson STL 2  vector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> myVector = { 1,9,44,422,676,78 };

	//vector<int>::iterator it;
	//it = myVector.begin();// +1; или it++;
	//cout << *it << endl;
	//it+=2;
	////*it = 555;
	//cout << *it << endl;
	//it--;
	//cout << *it << endl;

	//for (vector<int>::iterator i=myVector.begin(); i != myVector.end(); i++)
	//for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.end(); i++) //константная версия и CBEGIN-возращает константный указатель
	//for (vector<int>::iterator i = myVector.cbegin(); i != myVector.end(); i++) так не рабоатет
	//for (vector<int>::const_iterator i = myVector.begin(); i != myVector.end(); i++) 
	//{
	//    cout << *i << endl;
	//}

	//Реверс итератор
	/*for (vector<int>::reverse_iterator  i = myVector.rbegin(); i != myVector.rend(); i++)
	{
		cout << *i << endl;
	}*/

	//ЕСЛИ НЕ ПОДДЕРЖИВАЕТЬСЯ АРИФМЕТИКА УКАЗАТЕЛЕЙ В КОЛЛЕКЦИИ ТО МОЖНО ВОСПОЛЬЗОВАТЬСЯ
	// advance();
   /* vector<int>::iterator it = myVector.begin();
	advance(it, 3);
	cout << *it << endl;*/

	
	cout<< myVector.capacity() << endl << endl;
	for (vector<int>::iterator  i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	vector<int>::iterator it = myVector.begin();

	cout << "Insert" << endl << endl;
	it+=5;
	myVector.insert(it, 999);//добавляет элемент туда куда указывает итератор
	cout << myVector.capacity() << endl << endl;
	for (it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "insert" << endl << endl;

	vector<int>::iterator itErase = myVector.begin();

	cout << "Erase" << endl << endl;

	myVector.erase(itErase, itErase+3);//удалил 1 или несколько элементво myVector.erase(itErase)-если хотим один
	cout << myVector.capacity() << endl << endl;
	for (it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << endl;
	}



	return 0;
}

