#include "enemy.h"

int main() {
    //declare instances of class Enemy
    Enemy rat = Enemy(2, 100, "Rattimus", 50);
    Enemy dog = Enemy(1, 500, "Dogster", 10);

    cout << "Rattimus's danger level: " << rat.getDanger() << endl;
    cout << "Rattimus's defauilt damage: " << rat.getDamage() << endl;
    
    // .c_str() is used due to older c++ compiler version
    //printf("monster %s hit %s...\n", dog.getName().c_str(), rat.getName().c_str());

    cout << "Rattimus's initial HP: " << rat.getHealth() << endl;
    cout << "Rattimus's is hit by Dogster..." << endl;
    rat.takeDamage(dog);
    cout << "Rattimus's HP after being hit by Dogster: " << rat.getHealth() << endl; 
    cout << "Rattimus's becomes enraged..." << endl;
    cout << "Rattimus activates damage-to-health shield..." << endl;
    rat.toggleAbsorb();
    cout << "Rattimus's is hit by Dogster..." << endl;
    rat.takeDamage(dog);
    cout << "Rattimus's [shield + enraged] HP after being hit by Dogster: " << rat.getHealth() << endl; 
    cout << "Rattimus's [shield + enraged] damage after being hit by Dogster: " << rat.getDamage() << endl;

    return (0);
}
