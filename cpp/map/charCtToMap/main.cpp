#include <map>
#include <iostream>
#include <cstring>

using namespace std;

static void printResult(map<char, int>& dictionary) {
    for(auto& pair : dictionary)
        cout << pair.first << " : " << pair.second << endl;
}

static int sumInstances(char c, const char* src) {
    int occurance = 0;
    for (int i = 0; i < strlen(src); i++) {
        if (c == src[i])
            occurance++;
    }
    return occurance;
}

static int isInMap(char c, map<char, int>& dictionary) {
    for(auto& pair : dictionary) {
        if (c == pair.first)
            return 1;
    }
    return 0;
}

void charCtToMap(const char* src, map<char, int>& dictionary) {
    if (strlen(src) > 0) {
        for(int i = 0; i < strlen(src); i++){
            if (isInMap(src[i], dictionary) == 0)
                dictionary.insert(make_pair(src[i], 1));
        }
        for(auto& pair : dictionary) {
            for(int i = 0; i < strlen(src); i++) {
                if (pair.second < 2 && pair.first == src[i])
                    pair.second = sumInstances(src[i], src);
            }
        }
    } 
}

/*
    Input: character array
    Output: map of each unique character and its count in the array
*/
int main() {
    const char src[] = {'a', 'b', 'a', 'c', 'd', 'a', 'b', 'b', 'b', 'b', 'x', 'c'};
    map<char, int> dictionary;

    charCtToMap(src, dictionary);
    printResult(dictionary);
    return 0;
}
