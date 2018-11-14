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

	ifstream fileB;
	//create song objects
	Song song[count];
	string datafromfile = "";
	//set datas into song objects
	//song[count].setsongname(title)

	count = count/3;

	int t = 0;
		fileB.open("txtfile.txt");
		if(fileB.is_open())
		{
			while(!fileB.eof())
			{
				getline(fileB, datafromfile);
				song[t].setsongname(datafromfile);
				getline(fileB, datafromfile);
				song[t].setartist(datafromfile);
				getline(fileB, datafromfile);
				song[t].setyear(datafromfile);
				t++;
			}
		}
		else
		{
			cout << "Error opening fileA!";
			exit(1);
		}

	for(int i = 0; i < count; i++)
	{
		cout << song[i].getsongname() << endl;
		cout << song[i].getartist() << endl;
		cout << song[i].getyear() << endl;
	}


	cout << endl;
	Song* ptr[count];
	for (int i = 0; i < count; i++)
	{
		ptr[i] = &song[i];
	}
	cout << ptr[0]->getsongname();
	cout << ptr[1]->getsongname();
	cout << ptr[2]->getsongname();
	//B.insertStart(1);
	//B.insertEnd(2);
	//B.print();
	return 0;
}




