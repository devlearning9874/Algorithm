

#include<iostream>
#include<algorithm>
using namespace std;

class Item{
    public:
     int value;
     int weight;
};


class FractionalKnapsack
{
private:
    /* data */
public:
   static bool compareValue(Item it1, Item it2){
        double r1 = (double)(it1.value)/(double)(it1.weight);
        double r2 = (double)(it2.value)/(double)(it2.weight);
        
        return r1 > r2;
    }
    double getMaxProfit(Item arr[], int n, int C){

       sort(arr, arr+n, compareValue);

       double max_profit = 0;
       double w;
       double fraction;
        
        for(int i=0; i<n; i++){
            
            if(arr[i].weight <= C){
                  
                  C = C - arr[i].weight;
                  max_profit += arr[i].value;

            }else{
                 w = arr[i].weight;
                 fraction = C/w;
                 max_profit += (arr[i].value)*fraction;

                 break;
            }
        }
       return max_profit;
     }
};


int main(){
    
    int n;  // Number of item
    cin>>n;
    int C;  // Capacity of bag
    cin>>C;

    Item arr[n];
        
    for(int i=0; i<n; i++){

        // int value, weight;
        // cin>>value>>weight;

        // arr[i].value = value;
        // arr[i].weight = weight;

        cin>>arr[i].value>>arr[i].weight;

    }

    FractionalKnapsack obj;

    double max_profit = obj.getMaxProfit(arr, n, C);
    
    cout<<max_profit<<"\n";

    return 0;
}


// Input:
// N = 3, W = 50
// values[] = {60,100,120}
// weight[] = {10,20,30}
// Output:
// 240.00

// Input:
// N = 2, W = 50
// values[] = {60,100}
// weight[] = {10,20}
// Output:
// 160.00