#include<iostream>
#include<vector>

using namespace std;


void printGraph(int n, vector<int> adj[]){

    for(int i=0; i<n; i++){

        cout<<i<<" :-";      
        for(int val: adj[i]){

            cout<<val<<"->";
        }

        cout<<endl;
    }
}


int main(){

   
    int n, e,u,v;
    cin>>n>>e;

    vector<int> adj[n+1];
    cout<<"Add graph input:-";

    for(int i=0; i<e; i++){
         
         cin>>u>>v;

         adj[u].push_back(v);
         adj[v].push_back(u);
    }

    printGraph(n, adj);




    return 0;
}



/* 
n e
5 7
-------
0 1
0 4
1 2
1 3
1 4
2 3
3 4

*/