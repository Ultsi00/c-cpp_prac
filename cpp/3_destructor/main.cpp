#include "prac.h"

int main() {
    Item lock = Item("abloy_model_85");

    lock.setPasscode("abraham");
    cout << "lock name: " << lock.getName() << endl;
    cout << "lock passcode: " << lock.getPasscode() << endl;
    lock.~Item();
    cout << "lock name remains: " << lock.getName() << endl;
    cout << "lock passcode now: " << lock.getPasscode() << endl;
    return 0;
}