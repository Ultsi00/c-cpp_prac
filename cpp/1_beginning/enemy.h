#ifndef ENEMY_H
# define ENEMY_H
# include <iostream>
# include <stdio.h>
using namespace std;

class Enemy
{
    private:
        int     e_danger;
        int     e_health;
        int     e_damage;
        bool    e_absorb = false;
        bool    e_rage = false;
        string  e_name;
        void    setRage(bool rage);
        void    toggleRage();
    public:
        Enemy(int danger, int health, string name, int damage);     //constructor
        string      getName() { return (e_name); }
        int         getDanger() { return (e_danger); }
        int         getHealth() { return (e_health); }
        int         getDamage() {return (e_damage); }
        void        setDanger(int danger);
        void        setHealth(int health);
        void        setName(string name);
        void        takeDamage(Enemy &hitter);
        void        setDamage(int damage);
        void        toggleAbsorb();
};

#endif