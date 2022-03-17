#include <iostream>
#include <stdlib.h>
#include "PlayingCard.h"

PlayingCard::PlayingCard()
{
    this->suit = cardSuit(rand() % 4);
    this->value = cardValue(rand() % 13);
}

PlayingCard::~PlayingCard()
{
}

bool PlayingCard::compareSuit(PlayingCard otherCard){
    if(suit == otherCard.suit){
        return true;
    }
    return false;
}

bool PlayingCard::compareValue(PlayingCard otherCard){
    if(value == otherCard.value){
        return true;
    }
    return false;
}

bool PlayingCard::compareGreaterThan(PlayingCard otherCard){
    if(static_cast<int>(value) > static_cast<int>(otherCard.value)){
        return true;
    }
    return false;
}

bool PlayingCard::compareLessThan(PlayingCard otherCard){
    if(static_cast<int>(value) < static_cast<int>(otherCard.value)){
        return true;
    }
    return false;
}

void PlayingCard::printCard()
{

    std::cout << "This card is ";

    switch (value)
    {
    case Ace:
        std::cout << "an Ace ";
        break;
    case Two:
        std::cout << "a Two ";
        break;
    case Three:
        std::cout << "a Three ";
        break;
    case Four:
        std::cout << "a Four ";
        break;
    case Five:
        std::cout << "a Five ";
        break;
    case Six:
        std::cout << "a Six ";
        break;
    case Seven:
        std::cout << "a Seven ";
        break;
    case Eight:
        std::cout << "an Eight ";
        break;
    case Nine:
        std::cout << "a Nine ";
        break;
    case Ten:
        std::cout << "a Ten ";
        break;
    case Jack:
        std::cout << "a Jack ";
        break;
    case Queen:
        std::cout << "a Queen ";
        break;
    case King:
        std::cout << "a King ";
        break;
    }

    std::cout << "of ";

    switch (suit)
    {
    case Club:
        std::cout << "Clubs";
        break;
    case Heart:
        std::cout << "Hearts";
        break;
    case Diamond:
        std::cout << "Diamonds";
        break;
    case Spade:
        std::cout << "Spades";
        break;
    }

    std::cout << "." << std::endl;
}