#include "card.h"
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "");

    Card deck[DECK_LENGTH];
    fill_deck(deck);
    shuffle_deck(deck);
    show_deck(deck);

    return 0;
}
