// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

struct Humen
{
public:
	Humen(string const _Firtst_Name, string const _Second_Name, int _age):Firtst_Name(_Firtst_Name),Second_Name(_Second_Name),age(_age)
	{
		ID = count++;
		
	}
	void GetInfo()
	{
		cout << ID << " " << Firtst_Name << " " << Second_Name << " " << age << "\n";
	}
	static int GetCount() {
		
		return count;
	}
	~Humen() {};

private:
	string Firtst_Name;
	string Second_Name;
	int age;
	int ID;
	static int count;
	
};



int Humen::count = 0;




int main()
{
	Humen FirstHumen("Ioan", "Shucin", 10);
	FirstHumen.GetInfo();
	Humen SecondHumen("Ioan2", "Shucin2", 15);
	SecondHumen.GetInfo();
	Humen ThirdHumen("Ioan3", "Shucin3", 20);
	ThirdHumen.GetInfo();
	 
	cout<<'\n'<<Humen::GetCount();
}
