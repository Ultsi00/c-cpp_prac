#include <iostream>
using namespace std;

//class vs typename: no high difference
//templated function
template<class T>
void square_value(T data)
{
    cout << "sent: " << data << endl;
    cout << "square: " << data * data << endl;
}
template<typename A>
void sum_twice(A data)
{
    cout << "sent: " << data << endl;
    cout << "2x: " << data + data << endl;
}

//template function. Requires return
template<typename T>
T cube_value(T data)
{
    return (data * data * data); 
}
template<typename T>
T add_values(T a, T b)
{
    T sum;
    sum = a + b;
    return sum;
}

int main() {
    cout << "*** templated functions ***" << endl;
    cout << "square_value():" << endl;
    square_value(5);
    square_value(1.4);
    cout << "sum_twice():" << endl;
    sum_twice(4.5);
    cout << endl;

    cout << "*** template functions ***" << endl;
    cout << "cube_value():" << endl;
    cout << cube_value(5) << endl;
    cout << "add_values():" << endl;
    cout << add_values(2, 7) << endl;
    cout << endl;

}