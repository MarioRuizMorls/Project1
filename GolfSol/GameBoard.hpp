#ifndef GameBoard_hpp
#define GameBoard_hpp
#include "Card.h"
#include "CardValues.h"
#include "DeckofCards.h"
#include <stdio.h>
#include <stack>
#include <list>
#include <thread>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <iomanip>
#include <queue>
#include <stack>
class GameBoard{
private:
public:
    queue<int> q;
    int six;
    DeckofCards card2;
    map<string, string> sp;
    map<int, string> rp;
    map<int, bool> ap;
    list<Card> deck1;
    list<Card> deck2;
    list<Card> deck3;
    list<Card> deck4;
    list<Card> deck5;
    list<Card> stock;
    list<Card> userdeck;
    stack<Card> ddeck;
    GameBoard();
    GameBoard(DeckofCards);
    void mainMenu(string &);
    void makeBoard(Card deck[]);
    void gameOverMenu();
    void makeBoard();
    void createDecks();
    void PopfromStack();
    void PopfromStack2();
    void AskUser();
    bool notValidMove(Card *end,list<Card>stack);
    bool isValid(string &,int, int);
    bool checkLossCondition();
    bool checkWinCondition();
    void wonMenu();
    void createSet();
};
#endif /* GameBoard_hpp */
