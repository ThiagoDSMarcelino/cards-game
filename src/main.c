#include "../include/card.h"
#include "card.h"
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "");

    Card deck[DECK_LENGTH];
    FillDeck(deck);
    ShuffleDeck(deck);

    for (int i = 0; i < DECK_LENGTH; i++)
    {
        if (i % 13 == 0 && i != 0)
            printf("\n");

        printf("%s ", CardToString(&deck[i]));
    }
    printf("\n");

    return 0;
}
