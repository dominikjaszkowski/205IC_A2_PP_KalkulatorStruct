#include <stdio.h>
#include <stdlib.h>
#include "kalkulator.h"

int main() {
    struct dzialanie *mojedzialanie = wczytajdzialanie();
    wypiszdzialanie(mojedzialanie);


    return 0;
}