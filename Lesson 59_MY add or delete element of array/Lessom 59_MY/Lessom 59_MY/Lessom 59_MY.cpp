// Lessom 59_MY.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


void FildArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}


void showArray(const int* arr1, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << '\t';
	}
	cout << '\n';
}




void Add(int*& arr1, int& size, const int SerialNum, const int num);
void Del(int*& arr1, int& size, const int num);

int main()
{
	int size = 6;
	int* Arr1 = new int[size];

	cout << '\n' << &Arr1 << '\n';

	FildArray(Arr1, size);
	cout << "size=" << size << '\n';
	showArray(Arr1, size);

	

	int SerNum = 2;
	int Num = 111;

	Add(Arr1, size, SerNum, Num);
	showArray(Arr1, size);
	Del(Arr1, size, SerNum);
	cout << '\n' << &Arr1 << '\n';

	cout <<"size=" << size << '\n';
	showArray(Arr1, size);


	

	delete[] Arr1;
}


// у даление не нужного элемента
// Копирование последовательно массива и удаление не нужного элемента
//
void Add(int*& arr1, int &size,const int SerialNum,const int num)
{
	int* arr2 = new int[size + 1];
	for (int i=0, z=0; z<size && i<size+1 ;i++,z++)
	{
		if (i + 1 ==SerialNum)
		{
			arr2[i] = num;
			i++;
		}
		arr2[i] = arr1[z];
	}

	
	delete[]arr1;
	arr1 = arr2;
	size++;
}

void Del(int*& arr1, int& size, const int num)
{
	int* arr2 = new int[size - 1];

	for (int i = 0, z = 0; z < size; i++, z++)
	{
		
		if (i+1 == num)
		{
			z++;
		}
		arr2[i] = arr1[z];
	}
	delete[]arr1;
	arr1 = arr2;
	size--;
}
/*создание новой области памяти и добавление элеменат в нужную
под номером ячейку*/