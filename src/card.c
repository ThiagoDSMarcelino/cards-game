#include "card.h"
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

const char values[13][3] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
const Suit suits[4] = {Heart, Club, Spade, Diamond};

Card new_Card(Suit suit, const char *value)
{
    Card card;
    card.suit = suit;
    card.value = malloc(strlen(value) + 1);
    strcpy(card.value, value);

    return card;
}

char *card_to_string(Card *card)
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

void fill_deck(Card deck[DECK_LENGTH])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
            deck[i * 13 + j] = new_Card(suits[i], values[j]);
    }
}

void shuffle_deck(Card deck[DECK_LENGTH])
{
    srand(time(NULL));

    for (int i = DECK_LENGTH - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

void show_deck(Card deck[DECK_LENGTH])
{
    for (int i = 0; i < DECK_LENGTH; i++)
    {
        if (i % 13 == 0 && i != 0)
            printf("\n");

        printf("%s ", card_to_string(&deck[i]));
    }
    printf("\n");
}