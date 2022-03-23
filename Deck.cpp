#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <random>

#include "Deck.h"
#include "Card.h"

Deck::Deck(){
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            Card *card = new Card(i,j);
            this->cards.push_back(card);
        }        
    }
}

Deck::~Deck(){
    for (int i = 0; i < cards.size(); i++)
    {
        free(cards[i]);
    }
    
}

void Deck::printDeck(){
    for(int i = 0; i < cards.size(); i++){
        cards[i]->printCard();  
    }
}

void Deck::shuffleDeck(){
    auto rd = std::random_device {}; 
    auto rng = std::default_random_engine{rd()};
    std::shuffle(std::begin(cards), std::end(cards),rng);
}

Card* Deck::drawCard(){
    Card* first = cards.front();
    cards.erase(cards.begin());
    return first;
}