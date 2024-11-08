﻿#include <assert.h>
#include <iostream>
#include "myList.cpp"

using namespace std;

int main()
{
	myList<int>  mlst { 1, 3, 5 };
	//Assigning new values
	mlst = { 2, 44, 11 };

	mlst.add_back(42);
	mlst.add_back(3);
	mlst.add_back(10);
	mlst.add_back(7);

	for (int i = 0; i < mlst.get_size(); i++)
	{
		cout << mlst[i] << "  ";
	}
	cout << "\n\n";
	
	mlst.Sort([](int a, int b) {return a > b; });

	cout << "Range-based for loop after sorting: " << "\n";	
	for (auto& i : mlst)
	{
		cout << i << "  ";
	}
	cout << endl;

	auto it = mlst.begin();
	it++;
	cout << "Postfix increment: " << *it << "\n\n";
	
	++it;
	cout << "Prefix increment: " << *it << "\n\n";

	cin.get();
}

