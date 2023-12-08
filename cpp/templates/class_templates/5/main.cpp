#include <iostream>
using namespace std;

template<typename T0, typename T1>
class Data {
    public:
        T0 one;
        T1 two;
        //non-parameterized construtor
        Data() : one(T0()), two(T1()) {}
        void setValues (T0 v0, T1 v1) { one = v0; two = v1; }
        //copy constructor for class template (different from non-template class CC)
        Data(const Data<T0, T1>& newPair) : one(newPair.one), two(newPair.two) {}
};

template<typename T0, typename T1>
class Pair {
    public:
        T0 one;
        T1 two;
        //parameterized constructor taking T0 and T1 to initialize 'one' and 'two'
        Pair(const T0& type0, const T1& type1) : one(type0), two(type1) {}
        Pair(const Pair<T0, T1>& newPair) : one(newPair.one), two(newPair.two) {}
};

template<typename T0, typename T1>
struct Bank
{
    T0 one;
    T1 two;
};

int main() {
    cout << "class template with non-parameterized constructor" << endl;
    Data<int, string> form0;
    form0.setValues(8, "string");
    cout << form0.one << " | " << form0.two << endl;
    cout << endl;

    cout << "class template with parameterized constructor" << endl;
    Pair<int, double> item0(10, 3.5);
    Pair<int, double> item1(item0);
    cout << item1.one << " | " << item1.two << endl;
    cout << endl;

    cout << "struct with multiple datatypes" << endl;
    Bank<string, double> a;
    a.one = "string";
    a.two = 3.5;
    cout << a.one << " | " << a.two << endl;
}