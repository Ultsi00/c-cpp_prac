#include <iostream>
using namespace std;

//class
class Data {
    public:
        int mV;
        //int mB;
        Data() {}
        // Data() : mV(0) {}    //"initializer list"
        // Data : mV(0), mB(0) {}
        void setV(int v) { mV = v; }
        void printV() { cout << mV << endl; }
};

//class as class template
template<class T>
class Info {
    public:
        T mName;
        Info() {}
        // Info() : mName(T()) {}   //not parameterized. see 'multiple types with class templates'
        void setName(T name) { mName = name; }
        void printName() { cout << mName << endl; }
        T getName() { return mName; }
};

int main() {
    cout << "'string' as datatype: " << endl;
    Info<string> p0;
    p0.setName("first");
    p0.printName();
    cout << endl;

    cout << "'int' as datatype: " << endl;
    Info<int> p1;
    p1.setName(12345);
    p1.printName();
    cout << p1.getName() << endl;
    cout << endl;

}