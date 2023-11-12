#include "prac.h"

Item::Item(string name) {
    setName(name);
}

void Item::setName(string name) {
    mName = name;
}

void Item::setPasscode(const char *passcode) {
    mSizeOfCode = strlen(passcode) + 1;
    mPasscode = new char[mSizeOfCode];
    if (mPasscode)
        strcpy(mPasscode, passcode);
    else
        cout << "mPasscode creation fail" << endl;
}

char* Item::getPasscode() {
    if (mPasscode == NULL)
        return ((char *)"--no passcode--");
    else
        return mPasscode;
}

Item::~Item() {
    delete[] mPasscode;
    mPasscode = NULL;
    cout << "i destroyed the passcode" << endl;
}