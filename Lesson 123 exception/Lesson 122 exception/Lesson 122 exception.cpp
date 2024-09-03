


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//class Point
//{
//public:
//	Point() { x = y = z = 0; }
//	Point(int x, int y, int z) { this->x = x; this->y = y; this->z = z; }
//
//private:
//	int x;
//	int y;
//	int z;
//	friend ostream& operator<<(ostream& os, const Point& point);
//	friend istream& operator>> (istream& is, Point& point);
//};
// 
//ostream& operator<<(ostream& os, const Point& point)
//{
//	os << point.x << " " << point.y << " " << point.z;
//	return os;
//}
// 
//istream& operator>> (istream& is, Point& point)
//{
//	is >> point.x >> point.y >> point.z;
//	return is;
//}



class Myexception : public exception
{
public:
	Myexception (const char *msg, int data) :exception(msg)
	{
		this->dataState = data;
	}

	int GetDataState() { return dataState; }

private:
	int dataState;
};






void Foo(int value)
{
	
	if (value < 0)
	{

		throw exception("Number less null");
		
	}
	if (value == 1)
	{
		throw Myexception("Number = 1 !!!", value);
	}

	cout << "Value= " << value << endl;
}



 


int main()
{
	try
	{ 
		Foo(6258935);
	}
	catch (Myexception& a)
	{

		cout << "1. We have caught a number - " << a.what() << endl;
		cout << "Data status - " << a.GetDataState() << endl;
	}
	catch(exception& a)
	{
		cout << "2. We have caught a number - " << a.what() << endl;
	}
		
		
	

	return 0;
}