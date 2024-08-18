// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	string path = "MyFile.txt";

	fstream fs;

	fs.open(path, fstream::in | fstream::out | fstream::app);

	if (!fs.is_open())
	{
		cout << "Creat" << endl;
	}
	else
	{
		string msg;
		int value;
		cout << "Open" << endl;
		cout << "Enter 1 if would write"<<endl;
		cout << "Enter 2 if would Read all writing" << endl;
		cin >> value;
		if (value == 1)
		{
			cout << "Введите ваше сообщение" <<endl ;
			SetConsoleCP(1251);
			cout << "Enter: ";
			cin >> msg;
			fs << msg << '\n';
			SetConsoleCP(866);
		}
		if(value==2)
		{
			while (!fs.eof())
			{

				msg = "";
				fs >> msg;
				cout << msg << endl;
			}

		}
	}


	fs.close();
	return 0;
}
