#include <stdio.h>
#include <stdlib.h>

char toUpperNew(char t[]){

    int i=0;
    while(t[i]!='\0'){
        if('a'<=t[i] && t[i] <= 'z'){
            t[i]=t[i]-32;
        }
        i++;
    }
    return t;
}
int main()
{

    printf("%s \n", toUpperNew("Olsztyn"));

    return 0;
}
