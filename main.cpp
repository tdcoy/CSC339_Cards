#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Deck.h"

int main(int argc, char **argv)
{
    srand(time(NULL));

    Deck deck;
    deck.printDeck();

    return 0;
}