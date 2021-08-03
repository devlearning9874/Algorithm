     // 1 2 3 4  5  6  7  8  9  10 ......N

#include<iostream>

using namespace std;

void printOneToN(int n){

     if(n==1){
         printf("%d ", n);
         return;
     }
    //   printf("%d ", n); To print N to 1
     printOneToN(n-1);
     printf("%d ", n); // To print 1 to N
}

int main(){

    int n;

    scanf("%d", &n);

    printOneToN(n);

    return 0;
}