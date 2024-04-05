#include <stdio.h>
#include <stdlib.h>
void findMaxValue(int numbers[], int size) {
    if (size <= 0) {
        printf("Tablica jest pusta.\n");
        return;
    }

    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Maksymalna wartosc w tablicy: %d\n", max);
}


int sumSquares(int n, int tab[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += tab[i] * tab[i];
    }
    return sum;
}

void revCopy(int n, int tab1[], int tab2[]) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[n - i - 1];
    }
}

int maxValue(int n, int tab[]) {
    int max = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}


int maxIdx(int n, int tab[]) {
    int maxIndex = 0;


    for (int i = 1; i < n; i++) {
        if (tab[i] > tab[maxIndex]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}


void shiftRight2(int n, int tab[]) {
    if (n <= 0) {
        printf("Nieprawidlowy rozmiar tablicy.\n");
        return;
    }


    int last = tab[n - 1];
    int secondLast = tab[n - 2];


    for (int i = n - 1; i >= 2; i--) {
        tab[i] = tab[i - 2];
    }


    tab[0] = secondLast;
    tab[1] = last;
}


int main()
{
    int numbers[] = {3, 7, 2, 8, 1, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    findMaxValue(numbers, size);



    int tab[] = {2, 3, 4, 5};
    int x = sizeof(tab) / sizeof(tab[0]);

    int result = sumSquares(x, tab);
    printf("Suma kwadratow elementow tablicy: %d\n", result);


    int tab1[] = {1, 2, 3, 4, 5};
    int n = sizeof(tab1) / sizeof(tab1[0]);
    int tab2[n];

    revCopy(n, tab1, tab2);

    printf("Tablica tab1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab1[i]);
    }
    printf("\n");

    printf("Tablica tab2 (po przepisaniu w odwrotnej kolejnosci): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab2[i]);
    }
    printf("\n");



    int tablica[] = {12, 43, 7, 29, 51, 18};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);


    int maxWartosc = maxValue(rozmiar, tablica);


    printf("Najwieksza wartosc w tablicy: %d\n", maxWartosc);




    int tablica1[] = {12, 43, 7, 29, 51, 18};
    int len = sizeof(tablica1) / sizeof(tablica1[0]);


    int indeksMax = maxIdx(len, tablica1);


    printf("Indeks najwiekszego elementu w tablicy: %d\n", indeksMax);





    int tablica2[] = {1, 2, 3, 4, 5, 6};
    int len2 = sizeof(tablica2) / sizeof(tablica2[0]);


    printf("Przed przesunieciem: ");
    for (int i = 0; i < len2; i++) {
        printf("%d ", tablica2[i]);
    }
    printf("\n");


    shiftRight2(len2, tablica2);


    printf("Po przesunieciu: ");
    for (int i = 0; i < len2; i++) {
        printf("%d ", tablica2[i]);
    }
    printf("\n");


    return 0;
}
