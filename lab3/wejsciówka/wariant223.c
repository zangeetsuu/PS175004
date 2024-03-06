#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i",&n);
    for(int i=-n;i<=n;i++){
        if(i%5==0 && i!=0){
            printf("%i \n",i);
        }
}

}
