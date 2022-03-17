#pragma once
class PlayingCard
{
public:
    PlayingCard();
    ~PlayingCard();

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
        Ace,
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
        King
    };
    bool compareSuit(PlayingCard);
    bool compareValue(PlayingCard);
    bool compareGreaterThan(PlayingCard);
    bool compareLessThan(PlayingCard);
    void printCard();
protected:
    cardSuit suit;
    cardValue value;
};