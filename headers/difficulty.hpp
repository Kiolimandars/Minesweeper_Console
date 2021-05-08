#ifndef DIFFICULTY_H
#define DIFFICULTY_H
#include <iostream>
using namespace std;

class Difficulty
{
    protected:
    unsigned short wid;
    unsigned short len;
    unsigned short nbMine;
    int time;
    public:
    void easy(); // Set the easy parameters
    void medium();// Set the medium parameters
    void hard();// Set the hard parameters

    //getters
    unsigned short getWidth();// Returns the width attribute
    unsigned short getLength();// Returns the length attribute
    unsigned short getMines();// Returns the nbMine attribute
    unsigned short getTime();// Returns the time attribute

    //setters
    void setLevel();// Change the difficulty
};
#endif
