#include <stdio.h>
#include <stdlib.h>
#include "stworz.h"
#include "wykonaj.h"

int main() {
    struct dzialanie *mojedzialanie = wczytajdzialanie();
    wypiszdzialanie(mojedzialanie);


    return 0;
}