

#include<iostream>

using namespace std;

int maxSumArray(int arr[], int n){
     
     int max_so_far = INT_MIN; 
     int max_end_here = 0;

     for(int i=0; i<n; i++){

         max_end_here = max_end_here + arr[i];

         if(max_so_far < max_end_here){
             max_so_far = max_end_here;
         }
         if(max_end_here < 0)
            max_end_here = 0;
     }
     return max_so_far;
}

int main(){

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};

    int n = sizeof(arr)/sizeof(arr[0]);

    int result = maxSumArray(arr,n);
    cout<<result;
    return 0;
}