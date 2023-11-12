#ifndef PRAC_H
#define PRAC_H
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

//Constructor. Command line input
class Obj {
    private:
        char    mSymbol;
        int     mSize;
    public:
        Obj(char c, string size);
        void    setSymbol(char symbol) { mSymbol = symbol; }
        void    setSize(string size);
        char    getSymbol() { return (mSymbol); }
        int     getSize() { return (mSize); }
        void    take_input();
        void    print_object();
};

//Default constructor
class Blank {
    private:
        string  mName;
        int     mValue;
    public:
        void setName(string name) { mName = name; }
        void setValue(int value) { mValue = value; }
        string getName() { return(mName); }
        int getValue() { return(mValue); }
};

#endif
