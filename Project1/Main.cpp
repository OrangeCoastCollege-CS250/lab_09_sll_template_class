/*
Badajoz, Severiano

CS A250
October 29, 2017

Lab 09
*/
#include "Pair.h"
#include "AnyList.h"
#include "AnyList.cpp"

#include <iostream>
using namespace std;

void testInt();
void testDouble();
void testString();
void testPair();

int main()
{
	testInt();
	cout << endl;
	testDouble();
	cout << endl;
	testString();
	cout << endl;
	testPair();
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}

void testInt()
{
	AnyList<int> list1, list2, list3;

	list1.insert(10);
	list1.insert(11);
	list1.insert(12);
	list1.insert(13);
	list1.insert(14);

	list2.insert(5);
	list2.insert(3);
	list2.insert(9);

	list3.insert(78);

	cout << "TEST: Ostream operator <<\n\n";
	cout << "\tList1 is: " << list1 << endl;
	cout << "\tList2 is: " << list2 << endl;
	cout << "\tList3 is: " << list3 << endl;

}

void testDouble()
{
	AnyList<double> list1, list2, list3;

	list1.insert(10.9);
	list1.insert(11.4);
	list1.insert(12.3);
	list1.insert(13.5);
	list1.insert(14.1);

	list2.insert(5.8);
	list2.insert(3.7);
	list2.insert(9.4);

	list3.insert(78.2);

	cout << "TEST: Ostream operator <<\n\n";
	cout << "\tList1 is: " << list1 << endl;
	cout << "\tList2 is: " << list2 << endl;
	cout << "\tList3 is: " << list3 << endl;
}

void testString()
{
	AnyList<string> list1, list2, list3;

	list1.insert("What");
	list1.insert("a");
	list1.insert("beautiful");
	list1.insert("day");
	list1.insert("!");

	list2.insert("Isn't");
	list2.insert("it");
	list2.insert("?");

	list3.insert("Yes!");

	cout << "TEST: Ostream operator <<\n\n";
	cout << "\tList1 is: " << list1 << endl;
	cout << "\tList2 is: " << list2 << endl;
	cout << "\tList3 is: " << list3 << endl;
}

void testPair()
{
	// Create your own testing cases after adding the class Pair.

	// NOTE: Do NOT make your class Pair a template.
	AnyList<Pair> list1, list2, list3;
	list1.insert(Pair(1, 2));
	list1.insert(Pair(3, 4));
	list1.insert(Pair(5, 6));
	
	list2.insert(Pair(5, 6));
	list2.insert(Pair(3, 4));
	list2.insert(Pair(1, 2));
	
	list3.insert(Pair(1, 4));
	list3.insert(Pair(2, 3));

	cout << "TEST: Ostream operator <<\n\n";
	cout << "\tList1 is: " << list1 << endl;
	cout << "\tList2 is: " << list2 << endl;
	cout << "\tList3 is: " << list3 << endl;
}