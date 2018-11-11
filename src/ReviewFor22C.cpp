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
#include <sstream>

//#include <iomanip>


using namespace std;

int main() {
	Linklist B;

	ifstream fileA;
	//count lines of fileA
	string line = "";
	int count = 0;
	fileA.open("txtfile.txt");
	if(fileA.is_open())
	{
		while (!fileA.eof())
		{
			getline(fileA, line);
			count++;
		}
	}
	else
	{
		cout << "Error opening fileA!";
		exit(1);
	}
	fileA.close();

	//create song objects
	Song song[count];
	string datafromfile = "";
	//set datas into song objects
	//song[count].setsongname(title)

	while(count >= 0)
	{
		fileA.open("txtfile.txt");
		if(fileA.is_open())
		{
			while(!fileA.eof())
			{
				getline(fileA, datafromfile);
				song[count].setsongname(datafromfile);
				getline(fileA, datafromfile);
				song[count].setartist(datafromfile);
				getline(fileA, datafromfile);
				song[count].setyear(datafromfile);
				cout << count;
			}
		}
		else
		{
			cout << "Error opening fileA!";
			exit(1);
		}
	count--;
	}

	return 0;
}
