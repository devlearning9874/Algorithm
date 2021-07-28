

#include<iostream>
#include<algorithm>

using namespace std;

class Job{
  
  public:
    int id;

    int deadline;

    int profit;
};

bool comparison(Job j1, Job j2){

    return (j1.profit > j2.profit);
}

void printMaxProfitJobSequence(Job arr[], int n){
    // Step 1. Sort Job based on max profit in decreasing order
    sort(arr, arr+n, comparison);
    
    int result[n];
    bool slot[n];

    for(int i=0; i<n; i++){
        slot[i] = false;
    }

    for(int i=0; i<n; i++){


        for(int j= min(n, arr[i].deadline) - 1; j>=0; j--){

            if(slot[j] == false){
                
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }

    // Print result

    for(int i=0; i<n; i++){

        if(slot[i]){
            cout<<(char)arr[result[i]].id<<" ";
        }
    }

}

int main(){

    Job arr[] = {{'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                {'d', 1, 25}, {'e', 3, 15}};

    int n = sizeof(arr)/sizeof(arr[0]);

    printMaxProfitJobSequence(arr, n);
    cout<<endl;
    
    return 0;
}