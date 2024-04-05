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

    printf("Maksymalna wartoœæ w tablicy: %d\n", max);
}

