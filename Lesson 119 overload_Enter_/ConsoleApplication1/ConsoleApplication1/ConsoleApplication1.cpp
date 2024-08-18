


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
	string path = "myFile.txt";


	Point point(31, 51, 10);

	cout << point << endl;


	fstream fs;
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




		/*fs << point << "\n";*/

	}
	fs.close();



	/*ofstream pFout;
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
	}*/

	return 0;
}