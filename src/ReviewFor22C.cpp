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

	//insert these objects into link list

	Linklist A;
	cout << endl << endl << endl;
	for (int i = 0 ; i <3; i++)
		A.getdatafromsong(ptr[i]);

	A.insertStart(2, ptr[0]);
	A.insertEnd(3, ptr[1]);
	A.getdatafromcurrentnode(2);
	return 0;
}




