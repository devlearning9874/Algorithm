// Print fibonacci of n numbers
// Fibonacci Series
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233.....n
#include<iostream>
using namespace std;

int n1 = 0;
int n2 = 1;
int nextTerm = 0;

void printFibonacci(int n){

    
    if(n==0 || n==1){
        return;
    }else{
        int prev = n2;
       nextTerm = n1 + n2;
       n1 = prev;
       n2 = nextTerm;
       
       printf("%d ", nextTerm);
       printFibonacci(n-1);
    }

}


int main(){

    int n;
    scanf("%d", &n);
    printf("%d ", n1);
    printf("%d ", n2);
    printFibonacci(n-1);

    return 0;
}