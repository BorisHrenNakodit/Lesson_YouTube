// Lesson STL 1  vector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myVector = { 5,15,25,35,45,55 };


	

	/*myVector.push_back(5);
	myVector.push_back(15);
	myVector.push_back(25);
	myVector.push_back(35);
	myVector.push_back(45);
	myVector.push_back(55);*/


	myVector[0] = 1000;




	cout << "size vector= " << myVector.size() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	//myVector.clear();

	//cout << "Metod clear " << myVector.size() << endl;

	//for (int i = 0; i < myVector.size(); i++)
	//{
	//	cout << myVector[i] << endl;
	//}


	myVector.pop_back();
	cout << "Metod pop_back " << myVector.size() << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	// МЕтод at не выходит за границы в отличии о [] но медленее 
	//try
	//{
	//	cout << myVector.at(7) << endl;
	//}
	//catch (const std::out_of_range& ex)
	//{
	//	cout << ex.what() << endl << endl;
	//}
	//cout << myVector.at(5) << endl;


	cout <<"Size CAPACITY = " << myVector.capacity() << endl;


	myVector.push_back(35);
	myVector.push_back(45);

	cout << "EDIT Size CAPACITY = " << myVector.capacity() << endl;


	myVector.reserve(100); //Здадаем размер запаса элементов

	cout << "EDIT Size CAPACITY = " << myVector.capacity() << endl;

	myVector.shrink_to_fit(); //Освобождает не используемую память 
	cout << "After shrink_to_fit() Size CAPACITY = " << myVector.capacity() << endl;


	vector<int> myVector1(20, 666);


	cout << "Metod pop_back " << myVector1.size() << endl;
	cout << "Size CAPACITY = " << myVector1.capacity() << endl;
	for (int i = 0; i < myVector1.size(); i++)
	{
		cout << myVector1[i] << endl;
	}


	cout << myVector.empty() << endl; //Проверка на то есть ли элементы в векторе


	//vector.resize()//изменяет размер вектора
	/*cout << "before resize " << myVector.size() << endl;
	myVector.resize(2);
	cout << "Metod resize " << myVector.size() << endl;
	cout << "Size CAPACITY = " << myVector.capacity() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	myVector.resize(5,99);
	cout << "Metod resize " << myVector.size() << endl;
	cout << "Size CAPACITY = " << myVector.capacity() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}*/
	






}



