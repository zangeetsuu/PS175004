#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    wczytajInta();
    printf("\n");

    roznicaFloat();
    printf("\n");

    rokUr(2004);
    printf("\n");

    srednia(1,2,3);
    printf("\n");



    podwoj();
    printf("\n");

    waluta(10);
    printf("\n");

    wypisz();
    printf("\n");

    zad10();
    return 0;
}

void wczytajInta(){
    printf("Wczytaj inta \n");
    int number;
    scanf("%d",&number);
    printf("%d",number);
}

void roznicaFloat(){
     printf("Roznica float \n");
    float fl1;
    float fl2;
    scanf("%f",&fl1);
    scanf("%f",&fl2);
    float wynik=fl1-fl2;
    printf("%f",wynik);
}

int rokUr(int x){
    printf("Rok urodzenia \n");
    printf("%d",x-1);
    return x-1;
}
int srednia(int a, int b, int c){
    printf("srednia \n");
    int len=a+b+c;
    float srednia=len/3;
    printf("%f",srednia);
    return srednia;
}

void odwroc(){
char p1[2];

scanf("%s",&p1);
for (int i = 1; i<=0;i--){
    printf("%s",p1[i]);
}
}

void podwoj(){
    double p1;
    scanf("%cf",&p1);
    double wynik=p1*2;
    printf("%cf",wynik);
}

int waluta(double dolar, double euro){
    double wynik=dolar*euro;
    printf("%cf",wynik);

    return wynik;
}

void wypisz(){
    printf("To jest cytat: \"Czesto uzywam jezyka C.");
}

void zad10(){
    printf("Specjalne znaki: \\t (tabulacja), \\n(nowa linia, \% (procent), \\\(ukosnik wsteczny)");
}

void zad11(){
double pp1,pp2;
scanf("%cl",pp1);
scanf("%cl",pp2);

double prp=sqrt(pow(pp1)+pow(pp2));
printf("%cl",prp);
}
