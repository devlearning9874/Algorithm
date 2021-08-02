

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

//call by reference
void subsetSet(int i, int arr[], int n, set<vector<int>> &set, vector<int> &currentSet){

       if(i==n){
           set.insert(currentSet);
           return;
       }
             
             
       subsetSet(i+1, arr, n, set, currentSet);
             currentSet.push_back(arr[i]);
       subsetSet(i+1, arr,n, set, currentSet);
             currentSet.pop_back();
}


void print(set<vector<int>> &set){

    for(auto it: set){

        cout<<"(";

        for(int i=0; i<it.size(); i++){

            if(i == it.size()-1){
                cout<<it[i];
            }else{
                cout<<it[i]<<" ";
            }
        }
        cout<<")";
    }
    cout<<endl;
}

int main(){

    int arr[] = {2,1,2};

    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> currentSet;
    set<vector<int>> set;
    sort(arr, arr+n);

    subsetSet(0, arr, n, set, currentSet);
     
    print(set);

    return 0;
}