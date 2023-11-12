#ifndef PRAC_H
#define PRAC_H
#include <iostream>
#include <cstring>
using namespace std;

//Destructor usage.
class Item {
    private:
        string  mName;
        char    *mPasscode = NULL;
        size_t  mSizeOfCode;
    public:
        Item(string name);
        ~Item(); //destructor needs to be defined as well! See item.cpp    
        void    setName(string name);
        void    setPasscode(const char *passcode);
        string  getName() { return (mName); }
        char*   getPasscode();
};

#endif
