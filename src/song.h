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
	int view;
public:
	Song();
	void addSong(int year, string artist, int view);
	void getyear(int y);
	int setyear();
};

//constructor
Song::Song()
{
	year = 0;
	artist = "";
	view = 0;
}

void Song::getyear(int y)
{
	year = y;
}
int Song::setyear()
{
	return year;
}
void Song::addSong(int year, string artist, int view)
{

}


#endif /* SONG_H_ */
