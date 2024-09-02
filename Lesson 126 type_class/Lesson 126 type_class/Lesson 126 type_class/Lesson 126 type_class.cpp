#include <iostream>
using namespace std;




class Point
{
public:
    Point()
    {
        x = y = z = 0;
    }
    Point(int x,int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;

    }
	

private:
    int x;
    int y;
    int z;
};





template <typename T1, typename T2>
class MyClass
{
public:

    MyClass(T1 value1,T2 vlue2) // T1 or T2 можно поменять спокойно на class
    {
        this->value1 = value1;
        this->value2 = value2;
    }

    void DataTypeSize()
    {
        cout << "value1= " << sizeof(value1) << endl;
        cout << "value2= " << sizeof(value2) << endl;
      
    }

 /*   T1 Foo() {
        return value1;
    }*/

private:
    T1 value1;
    T2 value2;
};



int main()
{
    int a2 = 5;
    string za = "wgfjhgfhghgfhgfhfgjhgjhgjghjghjhghfghgf";
    MyClass<int,string> c(a2, za);
    c.DataTypeSize();

    //string Hoo = c.Foo();
   
    
    Point x;
    Point x2;
    MyClass<Point, Point> Two(x,x2);
    Two.DataTypeSize();


}
 