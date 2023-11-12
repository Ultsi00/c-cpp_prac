#ifndef PRAC_H
#define PRAC_H
#include <iostream>
using namespace std;

//default copy constructor is used in the code ("shallow-copying")
class Obj {
    private:
        int mA;
    public:
        int mB;
        void    setValues(int a, int b) { mA = a; mB = b; }
        int     getA() { return mA; }
        int     getB() { return mB; }
};

//user-defined copy constructor is used in the code.
//"deep-copying" ensures all instances have own memory addresses.
class Item {
    private:
        int mX;
    public:
        int mY;
        void    setValues(int x, int y) { mX = x; mY = x; }
        int     getA() { return mX; }
        int     getB() { return mY; }      
    Item(const Item& some_name) {
        mX = some_name.mX;
        mY = some_name.mY;
    }
};

#endif
