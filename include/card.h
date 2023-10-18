#ifndef CARDS_H
#define CARDS_H

#include <stddef.h>

#define DECK_LENGTH 52

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
    char *value;
} Card;

Card new_Card(Suit suit, const char *value);
char *card_to_string(Card *card);

void fill_deck(Card *deck, size_t length);
void shuffle_deck(Card *deck, size_t length);
void show_deck(Card *deck, size_t length);

#endif // CARDS_H