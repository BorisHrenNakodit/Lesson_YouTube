// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;




int main()
{
	/////////////Ввод в файл/////////////    
	ofstream F_Out;


	string path = "Myfile.txt"; //Lesson 115 Edit Files\ConsoleApplication1\Debug

	F_Out.open(path, ofstream::app);

	if (!(F_Out.is_open())) //провеерка на открылся ли файл
	{
		cout << "\nError Open File";
	}
	else
	{
		cout << "enter" << endl;
		string  a;
		//cin >> a;
		//F_Out << '\n';
		//F_Out  << a;
	}
	F_Out.close();
	/////////////вывод файла/////////////
	ifstream F_in;
	F_in.open(path);

	if (!(F_in.is_open())) //провеерка на открылся ли файл
	{
		cout << "Error Open File\n";
	}
	else
	{
		cout << "File is Open File\n";
		/*char ch;*/
		string str;

		/*  while (F_in.get(ch))
		  {
			  cout << ch;
		  }*/
		while (!F_in.eof())
		{

			char ch;
			while (fin.get(ch))
			{
				cout << ch;
			}
			str = "";
			/*F_in >> str;*/
			getline(F_in, str);
			cout << str << endl;
		}
	}
	F_in.close();

}





fin.close();
return 0;
}