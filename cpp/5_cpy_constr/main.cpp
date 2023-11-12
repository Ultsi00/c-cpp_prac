#include "prac.h"

int main() {
    //no user defined copy constructor:
    Obj ff;
    Obj gg;

    ff.setValues(2, 10);
    gg = ff;
    cout << gg.getA() << endl;
    cout << gg.getB() << endl;

    //user defined copy constructor (see .h):
    Obj mm;

    mm.setValues(400, 33);
    Obj nn = mm;
    cout << nn.getA() << endl;
    cout << nn.getB() << endl;

    return 0;
}