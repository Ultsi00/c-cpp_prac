#include <iostream>
using namespace std;

template<typename T>
void print_array(T arr[], int size, T skip = T())
{
    for (int i = 0; i < size; i++) {
        if (arr[i] != skip)
            cout << arr[i] << endl;
    }
}

int main() {
    int size = 5;

    cout << "send {1, 4, 2, 3, 2}, filter '2':" << endl;
    int nbArr[size] = {1, 4, 2, 3, 2};
    print_array(nbArr, size, 2); //instantiated as print_array(int arr[], int size, int skip)
    cout << endl;

    cout << "send {'a', 'b', 'x', 'x', 'y'}, filter 'x':" << endl;
    char cArr[size] = {'a', 'b', 'x', 'x', 'y'};
    print_array(cArr, size, 'x'); //instantiated as print_array(char arr[], int size, char skip)
    cout << endl;
}