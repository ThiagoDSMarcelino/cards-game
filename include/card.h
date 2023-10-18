#ifndef CARDS_H
#define CARDS_H

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

void fill_deck(Card deck[DECK_LENGTH]);
void shuffle_deck(Card deck[DECK_LENGTH]);
void show_deck(Card deck[DECK_LENGTH]);

#endif // CARDS_H