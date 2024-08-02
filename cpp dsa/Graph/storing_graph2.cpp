//this method is using list in vector/list for an undirectted graph 

#include<bits/stdc++.h>
using namespace std;

int main(){
    //n stabds for nodes and m stands for no of edges
    int n , m;

    cin>> n >> m;
    //so we gonnnna make an vector of the size of the total no of nodes+1 and inside of those single cellls of those vectors we are storing all the 
    //nneighbour nodes of that particuar index node
     vector<int> adj[n+1];

    for ( int i =0; i< n;; i++){
        int u , v;
        cin>> u >>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
return 0;
    
}
