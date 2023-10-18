#include "card.h"
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "");

    Card deck[DECK_LENGTH];
    fill_deck(deck, DECK_LENGTH);
    shuffle_deck(deck, DECK_LENGTH);
    show_deck(deck, DECK_LENGTH);

    return 0;
}
