#include "prac.h"

Obj::Obj(char c, string size){
    setSize(size);
    setSymbol(c);
}

void Obj::setSize(string size) {
    mSize = atoi(size.c_str());
}

void Obj::print_object() {
    cout << "size: " << getSymbol() << endl;
    cout << "symbol: " << getSize() << endl;
}

void Obj::take_input() {
    char symbol;
    string size;

    cout << "set identifier (char):" << endl;
    cin >> symbol;
    setSymbol(symbol);
    cout << "set size (int)" << endl;
    cin >> size;
    setSize(size);
}