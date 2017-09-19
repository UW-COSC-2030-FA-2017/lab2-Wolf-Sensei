// ListProcessor.cpp
// Robert Randolph
// COSC 2030 Section 10
// Lab02
// September 18, 2017

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl << endl;

	cows.insertAsLast(3.45);
	cows.insertAsLast(4.45);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size  :  " << horses.getSize() << endl;
	cout << "horses sum  :  " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(2.65);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size  :  " << horses.getSize() << endl;
	cout << "horses sum  :  " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size  :  " << horses.getSize() << endl;
	cout << "horses sum  :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size  :  " << pigs.getSize() << endl;
	cout << "pigs sum  :  " << pigs.sum() << endl << endl;

	pigs.insertAsLast(2.54);
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size  :  " << pigs.getSize() << endl;
	cout << "pigs sum  :  " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size  :  " << horses.getSize() << endl;
	cout << "horses sum  :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size  :  " << pigs.getSize() << endl;
	cout << "pigs sum  :  " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows sum  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size  :  " << horses.getSize() << endl;
	cout << "horses sum  :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size  :  " << pigs.getSize() << endl;
	cout << "pigs sum  :  " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
