#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> letters = {'a', 'x', 'k', 's'};

    // .push_back()
    for (char &c : letters) {
        cout << c << " ";
    }
    cout << endl;

    letters.push_back('o');
    for (char &c : letters) {
        cout << c << " ";
    }
    cout << endl;


    //brief look at emplace()

    vector<char> password = {'A', 'B', 'C', 'D'};
    // .begin() inserts the element to the beginning
    password.emplace(password.begin(), 'X');
    for (char &var : password) {
        cout << var << " ";
    }
    cout << endl;
    // .end() inserts the element to the end
    password.emplace(password.end(), 'Y');
    for (char &var : password) {
        cout << var << " ";
    }
    cout << endl;
    // "".begin() + 2" inserts the element to (0 + 2) index
    password.emplace(password.begin() + 2, 'Z');
    for (char &var : password) {
        cout << var << " ";
    }
    cout << endl;


    // brief look at insert()

    vector<int> seq = {5, 6, 7};
    for (int &i : seq) {
        cout << i << " ";
    }
    cout << endl;
    seq.insert(seq.begin() + 1, 0);
    for (int &i : seq) {
        cout << i << " ";
    }
    cout << endl;
    //inserting multiple elements
    seq.insert(seq.begin(), 5, 9);
    for (int &i : seq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
