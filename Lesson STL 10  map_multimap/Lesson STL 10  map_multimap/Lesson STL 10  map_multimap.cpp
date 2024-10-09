// Lesson STL 10  map_multimap.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include<string>
#include <map>
using namespace std;


int main()
{
	///*  pair<int, string> p(1,"phone");    
	//  cout << p.first << endl;
	//  cout << p.second << endl;*/


	//  map<int, string> myMap;

	//  // добавление нового оъекта
	//  myMap.emplace(3, "monitor");
	//  myMap. insert(make_pair(1, "phone"));
	//  myMap.insert(pair<int, string>(2, "noteboock"));
	// 
	//  //
	//  myMap.emplace(22, "motherbord");
	//  // Работает как бинарное дерево


	//  auto it = myMap.find(22);
	//  cout << it->second << endl;


	//  it = myMap.find(44);
	//  if (it != myMap.end()) 
	//  {
	//      cout << it->second << endl;
	//  }
	//  else{cout << "not found" << endl; }
	// 
	//  //
	//  //map хронит только уникальные ключи (они не могут повторяться)
	//  auto res = myMap.emplace(22, "rfdwghre"); // возращает false третим значение

	//  cout<<myMap[22]<<endl;




	map<string, int> Map;
	//Map.emplace("Pety", 1111);
	//Map.emplace("Fedya", 2222);
	//Map.emplace("Katya", 3333);

	//cout << Map["Pety"] << endl;
	//Map["Pety"] = 1234; // заменит существующую пару у ключа
	//cout << Map["Pety"] << endl;
	//Map["Pety222"] = 1234; // operator[] создаст не существующий элемент


	//Map.at("Pety") = 312; // работает как [] но 

	//try {
	//	Map.at("XZ_who") = 3; // не добавит выйдет в ошибку такого ключа нет
	//}
	//catch (const std::exception& ex)
	//{
	//	cout << ex.what() << endl;
	//	cout << "KEY NOT FOUND" << endl;
	//}
	//// удаление
	//Map.erase("Pety");

	multimap<string, int> myMultmap; // хранит дублирующие ключи

	myMultmap.emplace("Pety", 1111);
	myMultmap.emplace("Fedya", 2222);
	myMultmap.emplace("Katya", 3333);
	myMultmap.emplace("Katya", 3444);


	//myMultmap["123"] //не перегружен operator[]
	//myMultmap.at("XZ_who") //не перегружен .at

	return 0;
}
