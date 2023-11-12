#ifndef PRAC_H
#define PRAC_H
#include <iostream>
using namespace std;

/*
If value of mPrice and mManuID are not set here, but via creating a new instance for class Toolframe,
the data member values of that instance are NOT inherited to a new instance of class Hammer
*/ 
class ToolFrame {
    public:
        double  mPrice = 20.5;
        string  mManuID = "00a1";
        void    setPrice(double price) { mPrice = price; }
        void    setManuID(string manu_id) { mManuID = manu_id; }
        double  getPrice() { return mPrice; }
        string  getManuID() { return mManuID; }
};

class Hammer : public ToolFrame {
    int     mDurability;
    string  mTarget;
    public:
        void    setDurability(int durability) { mDurability = durability; }
        void    setTarget(string target) { mTarget = target; }
        int     getDurability() { return mDurability; }
        string  getTarget() { return mTarget; }
};

#endif


/* 
Example of access specifier combination:

    class A { 
    public: 
        int x; 
    
    protected: 
        int y; 
    
    private: 
        int z; 
    }; 
    
    class B : public A { 
        // x is public 
        // y is protected 
        // z is not accessible from B 
    }; 
    
    class C : protected A { 
        // x is protected 
        // y is protected 
        // z is not accessible from C 
    }; 
    
    class D : private A // 'private' is default for classes 
    { 
        // x is private 
        // y is private 
        // z is not accessible from D 
    };
*/