﻿


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Point
{
public:
	Point() { x = y = z = 0; }
	Point(int x, int y, int z) { this->x = x; this->y = y; this->z = z; }

private:
	int x;
	int y;
	int z;
	friend ostream& operator<<(ostream& os, const Point& point);
	friend istream& operator>> (istream& is, Point& point);
};


ostream& operator<<(ostream& os, const Point& point)
{
	os << point.x << " " << point.y << " " << point.z;
	return os;
}

istream& operator>> (istream& is, Point& point)
{
	is >> point.x >> point.y >> point.z;
	return is;
}



int main()
{
	string path = "myFile.tx";


	Point point(31, 51, 10);

	cout << point << endl;


	/*fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
	{
		cout << "Error" << endl;
	}
	else
	{
		cout << "Open" << endl;


		while (!fs.eof())
		{
			Point p;
			fs >> p;
			cout << p << endl;
			if (fs.eof())
			{
				break;
			}
		}

		fs << point << "\n";

	}
	fs.close();
	


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
	*/



	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	
	try
	{
		cout << "Try open file"<<endl;
		fin.open(path);
		cout << "File open" << endl;
	}
	catch (const ifstream::failure & err)
	{
		cout<< err.what()<<endl;
		cout << err.code() << endl;
		cout << "Error"<<endl;
	}



	return 0;
}