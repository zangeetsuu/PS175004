#include <stdio.h>

int sum_of_even_numbers(int n, int tab[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (tab[i] % 2 == 0) {
            sum += tab[i];
        }
    }
    return sum;
}


int main() {

    int tablica[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int rozmiar_tablicy = sizeof(tablica) / sizeof(tablica[0]);


    int wynik = sum_of_even_numbers(rozmiar_tablicy, tablica);
    printf("Suma parzystych liczb w tablicy: %d\n", wynik);

    return 0;
}

