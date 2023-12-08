#include <iostream>
using namespace std;

//Multiple datatypes with function templates.
//  different datatype pairs each instantiate separate print_sum().
//  e.g. int+double & int+double => 1 instance of print_sum(),
//      int+double, float+double => 2 instances of print_sum().
template<typename T0, typename T1>
void print_sum(T0 nb_int, T1 nb_double)
{
    cout << nb_int + nb_double << endl;
}

//Example template used for instantiating as different datatypes
template<typename T>
void print_input(T data)
{
    cout << data << endl;
}

int main() {
    cout << "*** Multiple datatypes *** " << endl;
    cout << "print_sum(int, double):" << endl;
    print_sum(2, 0.5);
    cout << endl;

    cout << "*** Instantiating as different datatype ***" << endl;
    cout << "sent to print_input(T data)" << endl;
    cout << "print_input<char>(65):" << endl;
    cout << "result: ";
    print_input<char>(65);
    cout << "print_input<int>(3.5):" << endl;
    cout << "result: "; 
    print_input<int>(3.5);
    cout << endl;
}
