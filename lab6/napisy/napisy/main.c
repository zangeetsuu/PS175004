#include <stdio.h>
#include <stdlib.h>


int length(const char *str) {
    int len = 0;


    while (str[len] != '\0') {
        len++;
    }

    return len;
}
int isVowel(char c) {

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
        default:
            return 0;
    }
}

int countVow(char str[]) {
    int count = 0;
    int i = 0;


    while (str[i] != '\0') {
        if (isVowel(str[i])) {
            count++;
        }
        i++;
    }

    return count;
}


int lexComp(char str1[], char str2[]) {
    int i = 0;


    while (str1[i] != '\0' && str2[i] != '\0') {

        if (str1[i] != str2[i]) {
            return str1[i] < str2[i] ? 1 : 0;
        }
        i++;
    }


    if (str1[i] == '\0' && str2[i] != '\0') {
        return 1;
    } else if (str1[i] != '\0' && str2[i] == '\0') {
        return 0;
    }

    return 0;
}



void toUpperNew(char str[]) {
    int i = 0;


    while (str[i] != '\0') {

        if (str[i] >= 'a' && str[i] <= 'z') {

            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
}


void strNcopy(char nap1[], char nap2[], int n) {
    int i;


    for (i = 0; i < n && nap1[i] != '\0'; i++) {
        nap2[i] = nap1[i];
    }


    nap2[i] = '\0';
}
















int main()
{
    const char *napis = "Hello, world!";
    int dlugosc = length(napis);
    printf("Dlugosc napisu: %d\n", dlugosc);



    char napis1[] = "Hello, world!";
    int liczbaSamoglosek = countVow(napis);
    printf("Liczba samoglosek w napisie: %d\n", liczbaSamoglosek);


    char napis2[] = "hello";
    char napis3[] = "world";
    int wynik = lexComp(napis2, napis3);
    if (wynik == 1) {
        printf("Napis \"%s\" jest wczesniej w porzadku leksykograficznym niz \"%s\".\n", napis2, napis3);
    } else {
        printf("Napis \"%s\" nie jest wczesniej w porzadku leksykograficznym niz \"%s\".\n", napis2, napis3);
    }



    toUpperNew(napis1);
    printf("Napis po zamianie malych liter na duze: %s\n", napis1);



    char nap1[] = "Hello, world!";
    char nap2[20];
    strNcopy(nap1, nap2, 5);
    printf("Skopiowany napis: %s\n", nap2);




    return 0;
}
