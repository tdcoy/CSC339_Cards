#include <iostream>
#include <stdlib.h>

#include "Deck.h"

int main(int argc, char **argv)
{
    Deck deck;

    deck.shuffleDeck();
    
    std::cout << "Draw ten cards" << std::endl;
    for (int i = 0; i < 9; i++)
    {        
        deck.drawCard()->printVisualCard();
    }

    deck.shuffleDeck();
    
    std::cout << "Shuffle and draw ten cards" << std::endl;
    for (int i = 0; i < 9; i++)
    {
        deck.drawCard()->printVisualCard();
    }
    return 0;
}