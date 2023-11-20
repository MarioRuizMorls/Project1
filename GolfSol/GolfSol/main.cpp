#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <map>
#include <thread>
#include <iomanip>
#include "DeckofCards.h"
#include "GameBoard.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    string choice = "0";
    DeckofCards Hand;
    Hand.MakeDeck();
    Hand.ShuffleDeck();
    GameBoard g(Hand);
    g.makeBoard(Hand.deck);
    g.createDecks();
    cout << endl << endl;
    while(choice!="1"){
        g.mainMenu(choice);
        if(choice =="3"){
            return 0;
        }
   }
    if(choice == "1"){
        while(true){
            g.makeBoard();
            if(g.checkLossCondition()){
                g.gameOverMenu();
                return 0;
            }
            if( g.checkWinCondition()){
                g.wonMenu();
                return 0;
            }
            if(g.stock.size()<10&&!g.ap[7]){
                cout << "you are getting close to the end of your stockpile\nthis is just a little help to aid in finishing the game";
                g.createSet();
                cout << endl;
            }
            g.AskUser();
            g.PopfromStack();
        }
     }
   else{
        return 0;
    }
}
