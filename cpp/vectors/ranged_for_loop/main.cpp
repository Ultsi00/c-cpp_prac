#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers0 = {1, 2, 3, 4};
    //initializes a vector of size 3, with each element having value 66
    vector<int> numbers1(3, 66);

    //accessing elements in vector works the same way as with arrays
    int i = 0;
    while (i < 3) {
        cout << numbers1[i] << " ";
        i++;
    }
    cout << endl;

    // 1) (int var : num)
    //      Copies each element of num to the var variable in each iteration. This is not good for memory.
    // 2) (int &var : num)
    //      Does not copy each element of num to var. Accesses the elements of num directly from num itself. 
    //      This is more efficient

    //ranged for loop (commonly used with vectors)
    for (int i : numbers0) {
        cout << i << " ";
    }
    cout << endl;
    //ranged for loop with ampersand
    for (int &i : numbers0) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}