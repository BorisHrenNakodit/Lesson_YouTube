// Lesson STL 6 array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 6> arr1 = { 1,94,77,9,5 };
	

	try
	{
		cout << arr1.at(12) << endl; //a arr.at(i) всегда выдаст исключение если выйти за границы массива

	}
	catch (const std::exception&ex)
	{
		cout << ex.what() << endl;
	}


	for( int i = 0; i < arr1.size(); ++i)
	{
		cout << arr1[i] << endl;
	}

	cout << endl << endl << endl;

	for (auto el : arr1)
	{
		cout << el << endl;
	}

	cout << endl << endl << endl;

	/*arr1.fill(-1);
	for (auto el : arr1)
	{
		cout << el << endl;
	}*/

	cout << endl << endl << endl;

	cout << arr1.front()<< endl;
	cout << arr1.back() << endl;
}

