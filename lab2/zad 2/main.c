#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Zadanie 1\n");
    z1();
    printf("Zadanie 2\n");
    z2();
    printf("Zadanie 3\n");
    z3();
    printf("Zadanie 4\n");
    z4();
    printf("Zadanie 5\n");
    z5();
    printf("Zadanie 6\n");
    z6();
    printf("Zadanie 8\n");
    z8();
    printf("Zadanie 10\n");
    z10();
}

int z1(){
        int a;
        scanf("%i", &a);
        if(a>0){
            printf("Liczba wieksza niz 0\n");
        }
        else if(a==0){
            printf("Liczba rowna 0\n");

        }
        else{
            printf("Liczba mniejsza od 0\n");
        }

}
int z2()
{

    int a,b;
    scanf("%i %i", &a,&b);
    if(a>b){
        printf("%i \n",a);
    }
    else{
        printf("%i \n",b);
    }


}
int z3(){
    int ocena;
    scanf("%i",&ocena);

    switch(ocena){
        case 1 :
            printf("niedostateczny\n");
            break;

        case 2:
            printf("dopuszczaj¹cy\n");
            break;
        case 3:
            printf("dostateczny\n");
            break;
        case 4:
            printf("dobry\n");
            break;
        case 5:
            printf("bardzo dobry\n");
            break;
        case 6:
            printf("Ocena spoza zakresu\n");
            break;
        }
    }
int z4(){
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    if(a>b && c>b){
        printf("%i \n",b);
    }
    else if(b>a && c>a){
        printf("%i \n",a);
}   else{
        printf("%i \n",c);
}

}
int z5(){
    int rok;
    scanf("%i", &rok);
    if(rok%4==0 || rok%100==0 && rok%400==0){
        printf("Rok jest przestepny\n");
    }
    else{
        printf("Rok nie jest przestepny\n");
    }

}
int z6(){
    int a,b;
    scanf("%i %i",&a,&b);

    if((a+b)%2==0){
        printf("Parzysta\n");
    }
    else{
        printf("Nieparzysta\n");
    }

}
int z8(){
    int a,b;
    scanf("%i %i",&a,&b);
    (a>b)? printf("%i \n", a):printf("%i \n", b);

}

int z10(){
    int a;
    scanf("%i", &a);
    (a%2==0)?printf("parzysta"):printf("nieparzysta");
}
