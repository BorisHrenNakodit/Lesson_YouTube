


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



void Foo(int value)
{
	if (value < 0)
	{

		//throw exception("Are U idiot ?");
		//throw "PIpa";
		//throw value;

		throw "Are U idiot ? ";

	}
	cout << "Value= " << value << endl;
}

int main()
{
	try
	{
		Foo(-55);
	}
	catch (const exception& a) 
	{
		//catch(const char* a)
		//catch (const int a)
	
		cout << "1. We have caught a number - " << a.what() << endl;
	}
	catch (const char* a)
	{
		cout << "2. We have caught a number - " << a << endl;
	}

	return 0;
}