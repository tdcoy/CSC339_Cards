#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Deck.h"
#include "Card.h"

Deck::Deck(){
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 12; j++)
        {
            Card card(i,j);
            this->cards.push_back(card);
        }        
    }
}

Deck::~Deck(){
}

void Deck::printDeck(){
    for(int i = 0; i < cards.size(); i++){
        cards[i].printCard();
    }
}