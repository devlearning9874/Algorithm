// Print fibonacci of n numbers
// Fibonacci term starts with 1 not 0.
// Fibonacci Series
// 0  1  1  2  3  5  8   13   21 34 55 89 144 233.....n

#include<iostream>

using namespace std;

int n1 = 0;
int n2 = 1;
int nextTerm = 0;


int fibonacciNTerm(int n){

    if(n == 0 || n == 1){
        return 1;
    }

    
    nextTerm = n1 + n2;
    n1 = n2;
    n2 = nextTerm;
    
    fibonacciNTerm(n-1);

    return nextTerm;
}

int main(){

    int n;
    scanf("%d", &n);

    int nthTerm = fibonacciNTerm(n);

    printf("%d \n", nthTerm);

    return 0;
}