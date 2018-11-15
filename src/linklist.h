/*
 * linklist.h
 *
 *  Created on: Nov 3, 2018
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */


#include <stdio.h>
#include <iostream>
#include <string>
#include "song.h"
#ifndef LINKLIST_H_
#define LINKLIST_H_

using namespace std;

class Linklist
{
private:
	struct Node
		{
			Node* linknext;
			Node* linkprevious;
			int data;
			Song* ptrsong;
			//node constructor a.k.a instance of the struct
			Node(int n, Song* ptr)
			{
				data = n;
				linknext = NULL;
				linkprevious = NULL;
				ptrsong = ptr;
			}

		};
	Node* head;
	Node* tail;
	Node* iterator;
	int size;
public:
	Linklist();
	void getdatafromsong(Song *ptr);
	void insertStart(int ndata, Song* ptr);
	void insertEnd(int ndata, Song* ptr);
	void getpointerdata(Song* ptr);
	void print();
	void getdatafromcurrentnode(int nodenumber);
	void removeStart();
	void removeEnd();
	void getdata(int n);
};

void Linklist::getdatafromcurrentnode(int nodenumber)
{
	Node* N = NULL;
	N = head;
	while(nodenumber-1 > 0)
	{
		N = N->linknext;
		nodenumber--;
	}
	cout << N->ptrsong->getsongname() <<endl;
	cout << N->ptrsong->getartist() <<endl;
	cout << N->ptrsong->getyear() <<endl;

}

void Linklist::getdata(int n)
{
	iterator = head;
	while( n-1 > 0)
	{
		iterator = iterator->linknext;
	}
	cout << iterator->ptrsong;
}

void Linklist::getdatafromsong(Song * ptr)
{
	cout << ptr->getsongname() << endl;
	cout << ptr->getartist() << endl;
	cout << ptr->getyear() << endl;
}

Linklist::Linklist()
{
	head = tail = iterator = NULL;
	size = 0;
}
void Linklist::insertStart(int data, Song* ptr)
{
	if(size == 0)
	{
		Node* N = new Node(data, ptr);
		head = tail = N;
		size++;
	}
	else
	{
		Node* N = new Node(data, ptr);
		N->linknext = head;		// point to next node
		head->linkprevious = N; //	point to previous node
		head = N;
		size++;
	}
}

void Linklist::insertEnd(int data, Song* ptr)
{
	if(size == 0)
	{
		Node* N = new Node(data, ptr);
		head = tail = N;
		size++;
	}
	else
	{
		Node* N = new Node(data, ptr);
		N->linkprevious = tail;	//point back to previous node
		tail->linknext = N;		//point forward to last node
		tail = N;
		size++;
	}
}

void Linklist::removeStart()
{
	if(size == 0)
	{
		cout << "nothing on the list!";
	}
	else if(size == 1)
	{
		head = tail = iterator = NULL;
	}
}

void Linklist::removeEnd()
{

}

void Linklist::print()
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout << temp->data;
		cout << temp->ptrsong->getsongname();
		temp = temp->linknext;
		cout << endl;
	}
	cout << endl;
}
#endif /* LINKLIST_H_ */
