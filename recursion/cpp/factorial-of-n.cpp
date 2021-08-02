

#include<iostream>

using namespace std;

int factorial(int n){

    if(n <=1 ){
        return 1;
    }

    int fact = n*factorial(n-1);
    
    return fact;
}

int main(){

    int n;

    scanf("%d", &n);

    int fact = factorial(n);
    
    printf("Factorial of %d is: %d",n, fact);

    return 0;
}