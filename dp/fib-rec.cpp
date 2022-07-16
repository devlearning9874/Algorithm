#include<bits/stdc++.h>

using namespace std;

int fibo(int n){

    if(n <=1){
        return 1;
    }

    return fibo(n-1) + fibo(n-2);
}


int main(){
cout<<"hellow"<<endl;
    int num;

   cin>>num;
    
    // cout<<num<<endl;

   cout<<num<<"th Term of Fibonacci is: "<<fibo(num);

    return 0;
}
