#include "practice.h"

/*
    a)
    Create a few object.
    Add these objects to a vector container
*/
int main() {

    Chair stool = {20, "wood"};
    Chair bench = {100, "steel"};
    vector<Chair> v_item = {stool, bench};
    cout << v_item[0].getPrice() << endl;

    return 0;
}