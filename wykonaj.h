struct dzialanie *wczytajdzialanie() {
    struct dzialanie *mojedzialanie = (struct dzialanie *) malloc(sizeof(struct dzialanie));

    printf("Wpisz dzialanie(+,-,*,/): ");
    scanf("%d %c %d", &(mojedzialanie->l1), &(mojedzialanie->znak), &(mojedzialanie->l2));


    return mojedzialanie;

}

void wypiszdzialanie(struct dzialanie *wypisz){
    switch (wypisz->znak) {
        case '+':

            wypisz->wynik = wypisz->l1 + wypisz->l2;

            break;


        case '-':

            wypisz->wynik = wypisz->l1 - wypisz->l2;

            break;


        case '*':

            wypisz->wynik = wypisz->l1 * wypisz->l2;

            break;


        case '/':
            if (wypisz->l1 == 0 || wypisz->l2 == 0) {
                wypisz->wynik = 0;
                break;
            } else if (wypisz->l1 != 0 || wypisz->l2 != 0) {
                wypisz->wynik = (float) wypisz->l1 / wypisz->l2;
                break;
            }


        default:

            printf("zle dzialanie");

    }
    printf("Wynik dzialania: %.2f", wypisz->wynik);
}