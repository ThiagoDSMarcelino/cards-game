#include "card.h"
#include <stdio.h>
#include <locale.h>

Card NewCard(Suit suit, char value)
{
    Card card;
    card.suit = suit;
    card.value = value;

    return card;
}

char *CardToString(Card *card) {
    static char str[6];  // Tamanho arbitrário para a representação da string

    snprintf(str, sizeof(str), "%c%lc", card->value, card->suit);

    return str;
}

void FillDeck(Card deck[52])
{
    char values[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K'};
    Suit suits[4] = {Heart, Club, Spade, Diamond};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            deck[i * j] = NewCard(suits[i], values[j]);
            printf("%s ", CardToString(&deck[i * j]));
        }
        printf("\n");
    }
}