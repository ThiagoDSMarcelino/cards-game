#include "../include/card.h"
#include "card.h"
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "");

    Card deck[52];
    FillDeck(deck);

    return 0;
}
