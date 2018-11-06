//============================================================================
// Name        : ReviewFor22C.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <string>
#include "linklist.h"
#include "song.h"
#include <fstream>

using namespace std;

int main() {
	Linklist B;

	for (int number = 2; number <= 100; number++)
	{
		int count = 0;
		for (int divitor = 1; divitor <= number; divitor++)
		{
			if(number % divitor == 0)
			{
				count++;
			}
		}
		if(count <= 2)
		{
			B.insertEnd(number);
		}
	}
	B.print();
	Song a;
	a.setyear(123);
	cout << a.getyear();

	ifstream fileA;
	if(fileA.is_open())
	{

	}
	else
	{
		cout << "Error openning fileA!";
		exit(1);
	}

	return 0;
}
