#include "GameBoard.hpp"
#include <thread>
#include <algorithm>
#include <list>
#include <unordered_set>
GameBoard::GameBoard(){
};
GameBoard::GameBoard(DeckofCards primeDeck){
    for (int i = 0; i < 2; i++) {
       q.push((rand() % 2)+1);
     }
    card2 = primeDeck;
       sp.insert(std::make_pair("Spades", "♤"));
       sp.insert(std::make_pair("Clubs", "♧"));
       sp.insert(std::make_pair("Diamonds", "\u2666"));
       sp.insert(std::make_pair("Hearts", "\u2665"));
       rp.insert(std::make_pair(1, "A"));
       rp.insert(std::make_pair(2, "2"));
       rp.insert(std::make_pair(3, "3"));
       rp.insert(std::make_pair(4, "4"));
       rp.insert(std::make_pair(5, "5"));
       rp.insert(std::make_pair(6, "6"));
       rp.insert(std::make_pair(7, "7"));
       rp.insert(std::make_pair(8, "8"));
       rp.insert(std::make_pair(9, "9"));
       rp.insert(std::make_pair(10, "10"));
       rp.insert(std::make_pair(11, "J"));
       rp.insert(std::make_pair(12, "Q"));
       rp.insert(std::make_pair(13, "K"));
       ap.insert(std::make_pair(1, false));
       ap.insert(std::make_pair(2, false));
       ap.insert(std::make_pair(3, false));
       ap.insert(std::make_pair(4, false));
       ap.insert(std::make_pair(5, false));
       ap.insert(std::make_pair(6, false));
       ap.insert(std::make_pair(7, false));
       ap.insert(std::make_pair(8, false));
}
void GameBoard::createDecks(){
    for(int a= 0; a < 5;a++){
        deck1.push_back(card2.deck[a]);
    }
    for(int a= 5; a < 10;a++){
        deck2.push_back(card2.deck[a]);
    }
    for(int a= 10; a < 15;a++){
        deck3.push_back(card2.deck[a]);
    }
    for(int a= 15; a < 20;a++){
        deck4.push_back(card2.deck[a]);
    }
    for(int a= 20; a < 25;a++){
        deck5.push_back(card2.deck[a]);
    }
    
    for(int a= 25; a < 51;a++){
        stock.push_back(card2.deck[a]);
    }
    for(int a= 51; a < 52;a++){
        userdeck.push_back(card2.deck[a]);
    }
    for(int a= 25; a < 51;a++){
        ddeck.push(card2.deck[a]);
    }

}
void GameBoard::makeBoard(){
    list<Card>::iterator pos;
    list<Card>::iterator end;
    for(int a = 0;  a < 3; a++)
    {
        pos = deck1.begin();
        end = deck1.end();
        for(pos; pos!=end; ++pos)
        {
            string u = pos->suit;
            int v = pos->value;
            if(a%2==0)
            {
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
            }
        }
        cout << endl ;
    }
    cout<<endl;
    for(int a = 0;  a < 3; a++)
    {
        pos = deck2.begin();
        end = deck2.end();
        for(pos; pos!=end; ++pos)
        {
            string u = pos->suit;
            int v = pos->value;
            if(a%2==0)
            {
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
            }
        }
        cout << endl ;
    }
    cout<<endl;
    for(int a = 0;  a < 3; a++)
    {
        pos = deck3.begin();
        end = deck3.end();
        for(pos; pos!=end; ++pos)
        {
            string u = pos->suit;
            int v = pos->value;
            if(a%2==0)
            {
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
            }
        }
        cout << endl ;
    }
    cout<<endl;
    for(int a = 0;  a < 3; a++)
    {
        pos = deck4.begin();
        end = deck4.end();
        for(pos; pos!=end; ++pos)
        {
            string u = pos->suit;
            int v = pos->value;
            if(a%2==0)
            {
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
            }
        }
        cout << endl ;
    }
    cout<<endl;
    for(int a = 0;  a < 3; a++)
    {
        pos = deck5.begin();
        end = deck5.end();
        for(pos; pos!=end; ++pos)
        {
            string u = pos->suit;
            int v = pos->value;
            if(a%2==0)
            {
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
            }
        }
        cout << endl ;
    }
    cout<<endl;
    int num1 = 1;
    cout << "USER WASTE DECK"<<endl;
        for(pos = userdeck.begin(); pos!=userdeck.end(); ++pos){
            string u = pos->suit;
            int v = pos->value;
            cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            if(num1%9==0){
                cout<<endl;
            }
            num1++;
        }
    cout<< " front of waste";
    cout<<endl<<endl;
    cout << "----------" << endl;
    cout << "|        |"<< endl;
    cout << "|   S    | stock left: " <<ddeck.size()<< endl;
    cout << "|        |" << endl;
    cout << "----------" << endl;
    cout<<endl<<endl<<endl;
}
void GameBoard::makeBoard(Card deck[]){
    int b1=0;
    int c = 0;
    for(int a = 0; a < 3; a++ )
    {
        for(int b = b1; b < b1+13; b++ )
        {
            string u = deck[b].suit;
            int v = deck[b].value;
            if(a%2==0){
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                if(b==12+b1){
                    cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" << setw(2) << "D" <<c ;
                }
                else{
                    cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
                }
            }
            
        }
        cout << endl;
    }
    cout << endl;
    b1 = b1+13;
    c++;
    for(int a = 0; a < 3; a++ )
    {
        for(int b = b1; b < b1+13; b++ )
        {
            string u = deck[b].suit;
            int v = deck[b].value;
            if(a%2==0){
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                if(b==12+b1){
                    cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" << setw(2) << "D" <<c ;
                }
                else{
                    cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    b1 = b1+13;
    c++;
    for(int a = 0; a < 3; a++ )
    {
        for(int b = b1; b < b1+13; b++ )
        {
            string u = deck[b].suit;
            int v = deck[b].value;
            if(a%2==0){
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                if(b==12+b1){
                    cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" << setw(2) << "D" <<c ;
                }
                else{
                    cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    b1 = b1+13;
    c++;
    for(int a = 0; a < 3; a++ )
    {
        for(int b = b1; b < b1+13; b++ )
        {
            string u = deck[b].suit;
            int v = deck[b].value;
            if(a%2==0){
                cout <<setw(2) << "|"<< sp[u] << setw(2)<< rp[v] << "|" ;
            }
            else{
                if(b==12+b1){
                    cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" << setw(2) << "D" <<c ;
                }
                else{
                    cout <<setw(2) << "|" << setw(4)<< sp[u] << setw(2)  << "|" ;
                }
            }
        }
        cout << endl;
    }
    cout << endl;
}
void GameBoard::PopfromStack(){
    if(six==1){
        userdeck.push_back(deck1.back());
        deck1.pop_back();
        if(deck1.empty()){
            ap[six]= true;
        }
    }
    if(six==2){
        userdeck.push_back(deck2.back());
        deck2.pop_back();
        if(deck2.empty()){
            ap[six]= true;
        }
    }
    if(six==3){
        userdeck.push_back(deck3.back());
        deck3.pop_back();
        if(deck3.empty()){
            ap[six]= true;
        }
    }
    if(six==4){
        userdeck.push_back(deck4.back());
        deck4.pop_back();
        if(deck4.empty()){
            ap[six]= true;
        }
    }
    if(six==5){
        userdeck.push_back(deck5.back());
        deck5.pop_back();
        if(deck5.empty()){
            ap[six]= true;
        }
    }
    if(six==6){
        userdeck.push_back(ddeck.top());
        ddeck.pop();
        if(ddeck.empty()){
            ap[6]= true;
            cout<<ap[6];
        }
        stock.pop_back();
    }
}
void GameBoard::wonMenu(){
    cout<<"CONGRATULATIONS, YOU WON THE" <<endl;
    cout<<" ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
    cout<<" ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀" << endl;
    cout<<" ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼" << endl;
    cout<<" ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀" << endl;
    cout<<" ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼" << endl;
    cout<<" ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄" << endl;
    cout<<" ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
}
void GameBoard::gameOverMenu(){
    cout<<" ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
    cout<<" ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀" << endl;
    cout<<" ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼" << endl;
    cout<<" ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀" << endl;
    cout<<" ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼" << endl;
    cout<<" ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄" << endl;
    cout<<" ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
    cout<<" ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼" << endl;
    cout<<" ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼" << endl;
    cout<<" ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼" << endl;
    cout<<" ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼" << endl;
    cout<<" ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄" << endl;
    cout<<" ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
    cout <<endl<<"    YOU HAVE NO MORE MOVES LEFT!!!"<<endl;
}
void GameBoard::AskUser(){
    cout << "Which row do you want to pop off? enter 1-5, and press 6 if you want to pop from stock";
    while(!(cin >> six)){
        cout << "Please only enter a digit from 1-6 ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    while(1>six || six>6){
        cout << "you cant pick the spot, it is not an option!!!"<< endl;
        cout << "Which row do you want to pop off?";
        while(!(cin >> six)){
            cout << "Please only enter a digit from 1-6";
            cin.clear();
            cin.ignore(123, '\n');
        }
        cin >>six;
    }
    
    while(ap[six]){
        cout << "you cant pick the spot, it is empty!!"<< endl;
        cout << "Which row do you want to pop off?";
        while(!(cin >> six)){
            cout << "Please only enter a digit from 1-6";
            cin.clear();
            cin.ignore(123, '\n');
        }
        cin >>six;
    }
    
    list<Card>::iterator end;
    switch (six) {
        case 1:
            end = std::prev(deck1.end());
            break;
        case 2:
            end = std::prev(deck2.end());
            break;
        case 3:
            end = std::prev(deck3.end());
            break;
        case 4:
            end = std::prev(deck4.end());
            break;
        case 5:
            end = std::prev(deck5.end());
            break;
        case 6:
            break;
        default:
            cout<<"unexcepted input";
            break;
    }
    if(six!=6)
    {
        while(notValidMove(&(*end), userdeck)&&(six!=6))
        {
            cout<< "stack value: "<<stock.back().value<<endl;
            cout <<"deck value: "<< end->value<<endl;
            cout<<"try again?";

            while(!(cin >> six)){
                cout << "Please only enter a digit from 1-6 ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            while(1>six || six>6)
            {
                cout << "you cant pick the spot, it is not an option!!!"<< endl;
                cout << "Which row do you want to pop off?";
                cin >>six;
            
            }
            switch (six) {
                case 1:
                    end = std::prev(deck1.end());
                    break;
                case 2:
                    end = std::prev(deck2.end());
                    break;
                case 3:
                    end = std::prev(deck3.end());
                    break;
                case 4:
                    end = std::prev(deck4.end());
                    break;
                case 5:
                    end = std::prev(deck5.end());
                    break;
                case 6:
                    break;
                default:
                    cout<<"unexcepted input";
                    break;
            }
        }
    }
}
bool GameBoard::notValidMove(Card *end,list<Card>stack){
    if((end->value+1)==stack.back().value)
    {
        return false;
    }
    if((end->value-1)==stack.back().value)
    {
        return false;
    }
    if((end->value-12)==stack.back().value)
    {
        return false;
    }
    if((end->value+12)==stack.back().value)
    {
        return false;
    }
    return true;
}
bool GameBoard::checkLossCondition(){
    bool endgame = true;
    if(ap[6])
    {
        for(int i = 1; i <=5; i++ )
        {
            if(!ap[i])
            {
                list<Card>::iterator end;
                switch (i){
                    case 1:
                        end = std::prev(deck1.end());
                        break;
                    case 2:
                        end = std::prev(deck2.end());
                        break;
                    case 3:
                        end = std::prev(deck3.end());
                        break;
                    case 4:
                        end = std::prev(deck4.end());
                        break;
                    case 5:
                        end = std::prev(deck5.end());
                        break;
                    default:
                        cout<<"unexcepted input";
                        break;
                }
                if(!notValidMove(&(*end), userdeck))
                {
                    endgame = false;
                }
            }
        }
    }
    else{
        endgame = false;
    }
    return endgame;
}
bool GameBoard::checkWinCondition(){
    bool result = true;
    for(int i = 1; i <=5; i++ ){
        if(!ap[i]){
            result = false;
        }
    }
    return result;
}
bool GameBoard::isValid(string &choice, int min, int max){
    bool validity = true;
    for(char c: choice){
        if(!isdigit(c)){
            validity= false;
        }
    }
    if(validity){
        int num = stoi(choice);
        if ( !((num >= min)&&(num <= max)) )
        {
            validity =false;
        }
    }
    return validity;
}
void GameBoard::mainMenu(string &choice){
    string strAry[] = {" __        __   _                            _           ____       _  __ ",
        " \\ \\      / /__| | ___ ___  _ __ ___   ___  | |_ ___    / ___| ___ | |/ _|",
        "  \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | __/ _ \\  | |  _ / _ \\| | |_ ",
        "   \\ V  V /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |_| | (_) | |  _|",
        "  __\\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|  \\__\\___/   \\____|\\___/|_|_|",
        " / ___|  ___ | (_) |_ __ _(_)_ __ ___  ",
        " \\___ \\ / _ \\| | | __/ _` | | '__/ _ \\ ",
        "  ___) | (_) | | | || (_| | | | |  __/ ",
        " |____/ \\___/|_|_|\\__\\__,_|_|_|  \\___| "
    };
    
    for (int i = 0; i <9 ;i++){
        cout << strAry[i]<<endl;
        std::this_thread::sleep_for(std::chrono::nanoseconds(100000000));
    }
    cout<<endl;
    cout<<"1. Start"<<endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(100000000));
    cout<<"2. Rules"<<endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(100000000));
    cout<<"3. Quit"<<endl;
    cin >> choice;
    while(!isValid(choice,1,3)){
        cout<< "Please only chose one of our options";
        cin >> choice;
    }
    if(choice =="2"){
        cout<< endl << "==========================RULES========================"<<endl;
        cout <<"Golf Solitaire features a game board with seven columns,\neach containing five face-up cards,alongside the\nStock (a facedown pile in the bottom left) and the\nWaste (an initially empty faceup pile next to the Stock).\nThe goal is to transfer all column cards to the Waste. "<< endl;
        cout << "Only the top card of each column can be moved, and it\nmust be one rank higher or lower than the current top\ncard on the Waste. When the columns have no playable cards,\ncards from the Stock can be drawn, with only one pass\nallowed. The game is won when all column cards are on the\nWaste, irrespective of the Stock's remaining cards.\nIf no moves are possible and the Stock is depleted, the\ngame is lost"<<endl;
        
    }
    if(choice =="3"){
        cout << "ok see ya next time!" << endl;
    }
}
void GameBoard::createSet(){
    string user;
    if(!ap[7]){
        cout << "This is random help, type y if you want random peek into stock else click any key";
        cin >> user;
        if(user == "y")
        {
            if(q.front()==1)
            {
                q.pop();
                if(q.empty()){
                    ap[7] = true;
                }
                std::unordered_set<Card, Card> myUnorderedSet;
                list<Card>::iterator pos;
                list<Card>::iterator end;
                pos = stock.begin();
                end = stock.end();
                for(pos; pos!=end; ++pos){
                    myUnorderedSet.insert(*pos);
                }
                std::cout << "values found in stock without duplicates at random order:" << std::endl;
                for (const auto& obj : myUnorderedSet) {
                    cout << obj.value<< endl;
                }
            }
           else if(q.front()==2)
            {
                q.pop();
                if(q.empty()){
                    ap[7] = true;
                }
                string vals;
                cout <<"which value do you want to find?"<<endl;
                cin >> vals;
                while(!isValid(vals,1,13)){
                    cout<< "Please only chose one of our options";
                    cin >> vals;
                }
                int val = stoi(vals);
                auto it = std::find_if(stock.begin(), stock.end(), [val](const Card& obj) {
                    return obj.value == val;
                });
                if (it != stock.end()) {
                    int index = 0;
                    for (auto iter = stock.begin(); iter != it; ++iter) {
                        ++index;
                    }
                    std::cout << "card with value " << vals << " found and is coming in " << stock.size()-index << " cards from stock"<< std::endl;
                } else {
                    std::cout << "Object not found." << std::endl;
                }
            }
        }
    }
}
