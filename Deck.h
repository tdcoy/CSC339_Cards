#pragma once
#include <vector>
#include "Card.h"

class Deck
{
public: 
    Deck();
    ~Deck();

public:
    std::vector<Card> cards;

public:
    void printDeck();
};