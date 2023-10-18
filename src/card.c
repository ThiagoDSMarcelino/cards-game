#include "card.h"
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

const char values[13][3] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
const Suit suits[4] = {Heart, Club, Spade, Diamond};

Card NewCard(Suit suit, const char *value)
{
    Card card;
    card.suit = suit;
    card.value = malloc(strlen(value) + 1);
    strcpy(card.value, value);

    return card;
}

char *CardToString(Card *card)
{
    char *str = (char *)malloc(strlen(card->value) + 4);

    if (str == NULL)
    {
        perror("Invalid card pointer");
        exit(EXIT_FAILURE);
    }

    snprintf(str, strlen(card->value) + 4, "%s%lc", card->value, card->suit);

    return str;
}

void FillDeck(Card deck[DECK_LENGTH])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
            deck[i * 13 + j] = NewCard(suits[i], values[j]);
    }
}
