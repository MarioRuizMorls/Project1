#include "Card.h"
#include "CardValues.h"
#include <random>
#ifndef DeckofCards_h
#define DeckofCards_h
struct DeckofCards{
    CardValues print;
    Card deck[52];
    void MakeDeck(){
        for(int col = 0; col <=12; col++)
        {
            for(int row = 0; row <=3; row++)
            {
                deck[(col+(row*13))].rank=print.rankArry[col];
                deck[(col+(row*13))].suit=print.SuitArry[row];
                deck[(col+(row*13))].value =print.valueArry[col];
            }
        }
    };
    void PrintDeck(){
        for(int col = 0; col <=12; col++)
        {
            for(int row = 0; row <=3; row++){
                
                cout << deck[(col+(row*13))].rank << " of " <<  deck[(col+(row*13))].suit << " "<< deck[(col+(row*13))].value<< ", ";
            }
            cout <<endl;
        }
    };
     void ShuffleDeck()
    {
        int seed = time(0);
        srand(seed);
            shuffle(deck, deck+52,
                    default_random_engine(seed));
    }
};
#endif /* DeckofCards_h */
