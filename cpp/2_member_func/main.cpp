#include "prac.h"

//Constructor. Object is initialized with arguments, but data members
// can be modified with command line input.
void func0() {
    Obj chair = Obj('a', "0");

    chair.take_input();
    chair.print_object();
}

//Default constructor
void func1() {
    Blank item;

    item.setName("tom");
    item.setValue(45);
    cout << "name: " << item.getName() << endl;
    cout << "value: " << item.getValue() << endl;
}

/*
    input: command line arguments.
    format: argv1 = identifier (char), size (char* -> int), ...
*/
int main() {
    func0();
    func1();

    return 0;
}