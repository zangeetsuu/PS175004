#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("-----------------------\n");
    printf("%i \n", sumTwoNumbers(2,3));
    printf("-----------------------\n");
    //printf("%f \n", calculateAbsoluteValue(4));
    printf("-----------------------\n");
    calculateFactorial(10);
    printf("-----------------------\n");
    printf("%i \n", sumNumbers(10));
    printf("-----------------------\n");
    printf("%i \n", sumSquares(4));
    printf("-----------------------\n");
    printf("%i \n", calculatePowerOfTwo(4));
    printf("-----------------------\n");
    printf("%i \n", calculateSquareRootFloor(3));
    printf("-----------------------\n");
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    printf("-----------------------\n");
    printf("%i \n", calculateFactorialRecursively(3));
    printf("-----------------------\n");
    printf("%i \n", calculateFibonacciRecursively(10));
    printf("-----------------------\n");
    printf("%i \n", calculate13(3));
    return 0;
}
int sumTwoNumbers(int a,int b){
    return a+b;

}

float calculateAbsoluteValue(float a){
   return (a>=0)?(a):(-a);

}

int calculateFactorial(unsigned int a){
    int silnia=1;
    for(int i=1;i<=a;i++){
        silnia*=i;
    }
    printf("%u\n",silnia);
}

int sumNumbers(unsigned int n){
    int suma=0;
    for(int i=1;i<=n;i++){
        suma+=i;
    }
    return suma;
}

int sumSquares(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i*i;

    }
    return sum;
}

int calculatePowerOfTwo(int n){
    int pow=1;
    for(int i=1;i<=n;i++){
        pow*=2;
    }
    return pow;
}
int calculateSquareRootFloor(unsigned int n){
    int i = 0;
    while(i*i <= n) {
        i++;
    }
    return i-1;
}


void countFunctionCalls(){
    static int count=0;
    count++;
    printf("%d\n",count);

}

int calculateFactorialRecursively(unsigned int n){
    if(n==0){
        return 1;
    }
    return n*calculateFactorialRecursively(n-1);
}
int calculateFibonacciRecursively(unsigned int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return calculateFibonacciRecursively(n-1)+calculateFibonacciRecursively(n-2);

}
int calculateArithmeticSequenceRecursively(unsigned int n, int d){
    if (n==1){
        return 1;
    }
    return 1+calculateArithmeticSequenceRecursively(n-1,d);

}

int calculate13(unsigned int n){
    n=1;
    return 2*calculate13(n-1)+3;

}
