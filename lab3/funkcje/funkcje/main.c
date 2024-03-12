#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("-----------------------\n");
    printf("%i \n", sumTwoNumbers(2,3));
    printf("-----------------------\n");
    calculateFactorial(10);
    printf("-----------------------\n");
    printf("%i \n", sumNumbers(10));
    printf("-----------------------\n");
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    printf("-----------------------\n");
    printf("%i \n", calculateFactorialRecursively(3));
    printf("-----------------------\n");
    printf("%i %lf\n", calculateGeometricSequenceRecursively(5, 1.5));
    printf("-----------------------\n");
    printf("%i \n", calculate15(3));
    printf("-----------------------\n");
    printf("%i %i\n", calculateGCD(2,5);
    return 0;
}
int sumTwoNumbers(int a,int b){
    return a+b;

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

double calculateGeometricSequenceRecursively(int n, double d) {
    if (n == 1) {
        return 1; // Wyraz początkowy
    } else {
        return d * calculateGeometricSequenceRecursively(n - 1, d);
    }
}


int calculate15(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return calculate15(n - 1) + 2 * calculate15(n - 2);
}

int calculateGCD(int n, int m) {
    if (m == 0) {
        return n; // NWD(n, 0) = n
    } else {
        return calculateGCD(m, n % m);
    }
}
