/*
 * song.h
 *
 *  Created on: Nov 4, 2018
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */
#include <stdio.h>
#include <iostream>
#include <string>
#ifndef SONG_H_
#define SONG_H_

using namespace std;

class Song{
private:
	int year;
	string artist;
	string songname;
public:
	Song();
	void setyear(int y);
	void setartist(string y);
	void setsongname(string s);
	int getyear();
	string getartist();
	string getsongname();
};

//constructor
Song::Song()
{
	year = 0;
	artist = "";
	songname= "";
}
void Song::setyear(int y)
{
	year = y;
}
void Song::setartist(string a)
{
	artist = a;
}
void Song::setsongname(string s)
{
	songname = s;
}
int Song::getyear()
{
	return year;
}

string Song::getartist()
{
	return artist;
}
string Song::getsongname()
{
	return songname;
}

#endif /* SONG_H_ */
