#include "prac.h" 

int main() {
    Hammer bonker100;

    bonker100.setDurability(50);
    bonker100.setTarget("concrete");
    cout << "durability: " << bonker100.getDurability() << endl;
    cout << "target: " << bonker100.getTarget() << endl;
    cout << "manuID: " << bonker100.getManuID() << endl;
    cout << "price: " << bonker100.getPrice() << endl;

    return 0;
}