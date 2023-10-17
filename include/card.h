#ifndef CARDS_H
#define CARDS_H

typedef enum
{
    Heart = 0x2666,
    Diamond = 0x2666,
    Club = 0x2663,
    Spade = 0x2660
} Suit;

typedef struct
{
    Suit suit;
    char value;
} Card;

Card NewCard(Suit suit, char value);
char *CardToString(Card *card);
void FillDeck(Card deck[52]);

#endif // CARDS_H