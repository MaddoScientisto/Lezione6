// References.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "MaddoLib.h"
#include <iostream>

using namespace std;
using namespace Maddo;

void BadSwap(int x, int y);
void GoodSwap(int& x, int& y);

int main()
{
	
	int myScore = 500;
	//int& mikesScore = myScore;  // create a reference
	int mikesScore = 1000;
	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";

	cout << "Adding 500 to myScore\n";
	//myScore += 500;
	BadSwap(myScore, mikesScore);
	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";

	cout << "Adding 500 to mikesScore\n";
	//mikesScore += 500;
	GoodSwap(myScore, mikesScore);
	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";

	MaddoLib::Pause();

	return 0;
}

void BadSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void GoodSwap(int & x, int & y)
{
	int temp = x;
	x = y;
	y = temp;
}
