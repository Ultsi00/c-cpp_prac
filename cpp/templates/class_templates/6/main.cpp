#include <iostream>
using namespace std;

template<typename T, int size>
class Array {        
    public:
        T arr[size];
        void init() {
            for(int i = 0; i < size; i++)
                arr[i] = T();
        }

        //array element access operators
        // for getting element
        T operator[](int i) const {
            if (i >= 0 && i < size)
                return arr[i];
            return T();
        }
        // for modifying element
        T& operator[](int i) {
            return arr[i];
        }

        void print_list() {
            for(int i = 0; i < size; i++)
                cout << arr[i] << endl;
        }
};

int main() {
    Array<string, 5> workers;
    for (int i = 0; i < 5; i++)
        workers[i] = 'a' + i;
    workers.print_list();
}