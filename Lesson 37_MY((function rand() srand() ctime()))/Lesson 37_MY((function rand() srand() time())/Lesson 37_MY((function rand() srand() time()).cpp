﻿// Lesson 37_MY((function rand() srand() time()).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
	using namespace std;

	int main()
	{
		srand(time(NULL));
		const int size = 10;
		int arr[size]{};

		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 20;

			for (int z = 0; z < i;)
			{
				if (arr[i] == arr[z])
				{
					arr[i] = rand() % 20;
					z = 0;
					continue;
				}
				z++;
			}
		}

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << '\n';
		}

	}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
