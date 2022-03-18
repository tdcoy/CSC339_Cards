#pragma once
class Card
{
public:    
    enum cardSuit
    {
        Club,
        Diamond,
        Heart,
        Spade
    };
    enum cardValue
    {
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        Ten,
        Jack,
        Queen,
        King,
        Ace
    };

public:
    Card(int _suit, int _value);
    ~Card();

public:
    bool compareSuit(Card);
    bool compareValue(Card);
    bool compareGreaterThan(Card);
    bool compareLessThan(Card);
    void printCard();
protected:
    cardSuit suit;
    cardValue value;
};