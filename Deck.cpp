#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Deck.h"
#include "Card.h"

Deck::Deck(){
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            Card card(i, j);
            this->cards.push_back(&card);
        }        
    }
}

Deck::~Deck(){
}

void Deck::printDeck(){
    for(int i = 0; i < cards.size(); i++){
        (Card*)cards[i].printCard();
    }
}