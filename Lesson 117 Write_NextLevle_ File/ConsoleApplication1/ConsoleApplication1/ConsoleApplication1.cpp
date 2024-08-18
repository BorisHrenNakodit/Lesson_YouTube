// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x=x;
		this->y=y;
		this->z=z;
	
	}
	

	

	void Print()
	{
		cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
	}

	int x;
	int y;
	int z;
};

int main()
{
	string path = "myFile.txt";


	Point point(13,15,66);
	point.Print();

	ofstream pFout;
	pFout.open(path, ofstream::app);

	if (!pFout.is_open())
	{
		cout << "FAIL";
	}
	else
	{
		cout << "Open" << endl;
		pFout.write((char*)&point, sizeof(Point));
	}
	pFout.close();


	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "FAIL";
	}
	else
	{
		cout << "Open" << endl;

		Point pnt;
		while (fin.read((char*)&pnt, sizeof(Point)))
		{
			pnt.Print();
		}
		fin.open(path);
	}
		

}
