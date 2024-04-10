
#include <stdio.h>
#include <stdlib.h>
int dodatkowe(char znak[]){
    int suma=0;
    int len=sizeof(znak)/sizeof(znak[0]);
    printf("%d\n",len);
    for(int i=0;i<=sizeof(znak)/sizeof(znak[0]);i++){
        if ('a' <=znak[i] && znak[i]<= 'z'){
            suma++;
        }

    }
    return suma;
}


