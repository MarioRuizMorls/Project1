#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;
#ifndef Card_h
#define Card_h
struct Card{
    string rank;
    string suit;
    int value = 1;
//    bool operator<(const Card& other) const {
//           return value < other.value;
//       }
    
    size_t operator()(const Card& obj) const {
            return std::hash<int>()(obj.value);
        }

        // Define an equality operator for MyClass
        bool operator==(const Card& other) const {
            return value == other.value;
        }
    int getIntValue() const {
            return value;
        }
};
#endif /* Card_h */
