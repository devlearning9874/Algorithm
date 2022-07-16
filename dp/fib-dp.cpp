#include<iostream>

using namespace std;


int fibo(int n){
       int fib_sum [n];

       fib_sum[0] = 0;
       fib_sum[1] = 1;

       for(int i=2; i<=n; i++){

        fib_sum[i] = fib_sum[i-1] + fib_sum[i-2];
       }

         return fib_sum[n];

}

int main(){

    int n;

    cin>>n;

    cout<<n<<"th term sum of fibonacci: "<<fibo(n)<<endl;
    
    return 0;
}