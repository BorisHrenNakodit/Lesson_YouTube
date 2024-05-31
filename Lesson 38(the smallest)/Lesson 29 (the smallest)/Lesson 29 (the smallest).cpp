// Lesson 29 (the smallest).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	

	const int SIZE_ARR = 10;
	int smallest;
	int arr[SIZE_ARR]{};



	for (int i = 0; i < SIZE_ARR; i++)
	{
		smallest = rand() % 20;

		for (int j = 0; j < i;)
		{
			if (arr[j] == smallest)
			{
				smallest = rand() % 20;
				j = 0;
				continue;
			}
			j++;
		}
		arr[i] = smallest;

	}
	// ENTER

	for (int i = 0; i < SIZE_ARR; i++)
	{
		cout << arr[i] << '\t';
		
	}
	cout << '\n';

	// Find small
	smallest = arr[0];
	for (int i = 0; i < SIZE_ARR; i++)
	{
		if (smallest > arr[i])
			smallest = arr[i];
	}
	cout << smallest;
}

