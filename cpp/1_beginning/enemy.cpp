#include "enemy.h"

Enemy::Enemy(int danger, int health, string name, int damage) {
    setDanger(danger);
    setHealth(health);
    setName(name);
    setDamage(damage);
}

void Enemy::setRage(bool rage) {
    e_rage = rage;
}

void Enemy::toggleRage() {
    if (e_rage) return;
    setDamage((e_absorb && getDanger() > 1) ? (getDamage() * 10) : getDamage()); 
    setRage(true);   
}

void Enemy::setDanger(int danger) {
    e_danger = danger;
}

void Enemy::setHealth(int health) {
    e_health = health;
}

void Enemy::setName(string name) {
    e_name = name;
}

void Enemy::takeDamage(Enemy &hitter) {
    setHealth(getHealth() - (e_absorb ? -hitter.getDamage() : hitter.getDamage()));
    if (e_absorb)
        toggleRage();
}

void Enemy::setDamage(int damage) {
    e_damage = damage;
}

void Enemy::toggleAbsorb() {
    e_absorb = !e_absorb;       //switches back and forth upon calling
}
