#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#ifndef CardValues_h
#define CardValues_h
struct CardValues
{
    string rankArry[13] = {"Ace", "Two", "Three", "Four", "Five" , "Six", "Seven", "Eight", "Nine", "Ten","Jack", "Queen", "King"};
    string SuitArry[4] = {"Clubs", "Spades", "Diamonds", "Hearts"};
    int valueArry[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};

};
#endif /* CardValues_h */
