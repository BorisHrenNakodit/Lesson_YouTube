
#include <iostream>
#include <string>




////////////
#include <memory>
////////////


using namespace std;




template <typename T>
class SmartPointr
{
public:
	SmartPointr(T* ptr)
	{
		this->ptr = ptr;
		cout << "Constructor" << endl;
	}

	T& operator*()
	{
		return *ptr;
	}
	~SmartPointr()
	{
		delete ptr;
		cout << "Destructor" << endl;
	}
private:

	T* ptr;
};

int main()
{
	/*SmartPointr<int> pointer = new int(5);
	SmartPointr<int> pointer2 = pointer;*/


	/* auto_ptr<int> ap1(new int(5));
	 auto_ptr<int> ap2(ap1);*/

	unique_ptr<int> ap1(new int(5));
	//  unique_ptr<int> ap2(ap1); ///Error
	unique_ptr<int> ap2;
	// ap2 = move(ap1); Делает тоже самое что и auto_ptr<int> ap2(ap1)
	// ap2.swap(ap1); Аналогично
	// int* p = ap1.get(); выдаст примитивный указатель на объект

 //int* p = new int(5); 
	// ap1.reset();  // Затирает объект в памяти 
	// ap1.release(); // Затирает Указатель на область памяти у объекта

	shared_ptr<int> p1(new int(5));
	shared_ptr<int> p2(p1);


	int SIZE;
	cin >> SIZE;

	shared_ptr<int[]> ptr(new int[SIZE] {1, 4, 5, 74, 5});

	for (int i = 0; i < SIZE; i++)
	{
		ptr[i] = rand() % 10;
		cout << ptr[i] << endl;
	}


	return 0;
}
