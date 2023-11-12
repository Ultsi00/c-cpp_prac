#include "practice.h"

Chair::Chair(int price, string material) {
    setPrice(price);
    setMaterial(material);
}

void Chair::setPrice(int price) {
    mPrice = price;
}

void Chair::setMaterial(string material) {
    mMaterial = material;
}