#include <iostream>
using namespace std;

//array as argument
template<typename T>
T getAverage(T nbArr[], int size)   //not all template args have to be template-type args
{
    //call default constructor for this datatype
    T sum = T();
    for (int i = 0; i < size; i++)
        sum = sum + nbArr[i];
    return (sum / size);
}

//reference as argument
template<typename T>
void tripleNumber(T& nb)
{
    nb = nb * 3;
}
template<typename A>
A doubleNumber(A& nb)
{
    nb = nb * 2;
    return nb;
}

int main() {
    cout << "*** Array ***" << endl;
    int size = 5;
    int numberArrInt[size] = {8, 12, 10, 5, 15};
    double numberArrDouble[size] = {1.1, 8.9, 5, 5, 5};
    cout << "getAverage() Int: "<< endl << getAverage(numberArrInt, size) << endl;
    cout << "getAverage() Double: "<< endl << getAverage(numberArrDouble, size) << endl;
    cout << endl;

    cout << "*** Reference ***" << endl;
    int nb = 3;
    int nba = 5;
    cout << "tripleNumber(): " << endl << "sent: " << nb << endl;
    tripleNumber(nb);
    cout << "tripled: " << nb << endl;
    cout << "doubleNumber(): " << endl << "sent: " << nba << endl;
    doubleNumber(nba);
    cout << "doubled: " << nba << endl;
    cout << endl;
}