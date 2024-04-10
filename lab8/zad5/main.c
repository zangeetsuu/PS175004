#include <stdio.h>
#include <stdlib.h>
int lexComp(char x[], char y[]){
    int i=0;


    while (x[i]!='\0' && y[i]!='\0'){
        if(x[i]!=y[i]){
                return x[i]<y[i]?1:0;
            }
            i++;
}

        }



int main()
{
    char t[]="Agrade";
    char c[]="Agrafka";
    printf("%d\n",lexComp(t,c));
    return 0;
}
