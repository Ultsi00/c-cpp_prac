#ifndef PRACTICE_H
# define PRACTICE_H
# include <iostream>
# include <vector>
using namespace std;

class Chair {
    private:
        int mPrice;
        string mMaterial;
    public:
        Chair(int price, string material);
        int getPrice() { return(mPrice); }
        string getMaterial() { return(mMaterial); }
        void setPrice(int price);
        void setMaterial(string material);
};

# endif

