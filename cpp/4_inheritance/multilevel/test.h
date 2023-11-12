#ifndef TEST_H
#define TEST_H
#include <iostream>

using namespace std;

class A {
    public:
        A() {
            int a = 5, b = 7;
            int sum = a + b;
            cout << "Sum:" << sum << endl;
        }
};
 
class B {
    public:
        B() {
            int x = 33, y = 2;
            int ded = x - y;
            cout << "Deduction: " << ded << endl;
        }
};
 
class C: public A, virtual B {
    public:
        C(): A(), B() {
            int i = 22, j = 4;
            int prod = i * j;
            cout << "Product: " << prod << endl;
        }
};

#endif