
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%Iu\n", sizeof(int));
    printf("%Iu\n", sizeof(int*));
    return 0;
}

int sum(int a, int b){
    return a+b;
}

int sumVals(int * p1, int * p2){
    return *p1+*p2;
}

void addPtr(int * p1, int * p2, int * p3){
    *p3=*p1+*p2;

}

int copyInt(int x, int * w){
*w=x
}

int findMax(double const* num1, double const * num2){
    if(*num1>*num2){
        return *num1;
    }
    else{
        return *num2;
    }
}
int initFlts(){
    float* p=malloc(4*sizeof(float));
    *p=0.5;
    *(p+1)=1.5;
    *(p+2)=2.5;
    *(p+3)=3.5;
    return *(p+3);
}
