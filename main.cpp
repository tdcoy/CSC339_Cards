#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "PlayingCard.h"

int main(int argc, char **argv)
{
    srand(time(NULL));

    PlayingCard card1;
    PlayingCard card2;
    PlayingCard card3;
    PlayingCard card4;
    PlayingCard card5;

    //printCards
    card1.printCard();
    card2.printCard();
    card3.printCard();
    card4.printCard();
    card5.printCard();
     
    //compareSuit Test
    if(card1.compareSuit(card2)){
        std::cout << "These cards are the same suit." << std::endl;
    }
    else{
        std::cout << "These cards are not the same suit." << std::endl;
    }

    //compareValue Test
    if(card1.compareValue(card2)){
        std::cout << "These cards are the same value." << std::endl;
    }
    else{
        std::cout << "These cards are not the same value." << std::endl;
    }

    //checkGreaterThan Test
    if(card1.compareGreaterThan(card2)){
        std::cout << "This card is greater than card2." << std::endl;
    }
    else{
        std::cout << "This card is less than or equal to card2." << std::endl;
    }

    //checkGreaterThan Test
    if(card1.compareLessThan(card2)){
        std::cout << "This card is less than card2." << std::endl;
    }
    else{
        std::cout << "This card is greater than or equal to card2." << std::endl;
    }
    return 0;
}