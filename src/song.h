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
	string year;
	string artist;
	string songname;
public:
	Song();
	void setyear(string y);
	void setartist(string y);
	void setsongname(string s);
	string getyear();
	string getartist();
	string getsongname();
};

//constructor
Song::Song()
{
	year = "";
	artist = "";
	songname= "";
}
void Song::setyear(string y)
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
string Song::getyear()
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
