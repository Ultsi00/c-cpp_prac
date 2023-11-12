#include <iostream>
#include <vector>
using namespace std;

//store vector element in selected index to iterator
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int>::iterator   iter_num;
    
    iter_num = numbers.begin() + 1;
    cout << *iter_num << endl;

    //can aswell be used in loops
    for (iter_num = numbers.begin() - 1; iter_num != numbers.end() - 1; iter_num++) {
        cout << numbers.at(*iter_num) << endl;
    }

    return 0;
}