#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> letter = {'a', 'b', 'c', 'd'};

    //same output
    cout << letter[1] << endl;
    cout << letter.at(1) << endl;

    letter.at(1) = 'x';
    cout << letter.at(1) << endl;

    //removes last element
    letter.pop_back();
    for (auto &c : letter) {
        cout << c << " ";
    }
    cout << endl;

    // clear()	    removes all the elements of the vector
    // front()	    returns the first element of the vector
    // back()	    returns the last element of the vector
    // empty()	    returns 1 (true) if the vector is empty
    // size()	    returns the number of elements present in the vector
    // capacity()	check the overall size of a vector

    cout << letter.size() << endl;
    cout << letter.capacity() << endl;
}