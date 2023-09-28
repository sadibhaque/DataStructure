#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define llf double

void print2dVector(const vector<vector<int>>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j <v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
    cout << endl;
    }
}

ll maxV = 5;

void addEdge(vector<vector<int>>& adj, ll x, ll y){
    adj[x][y] = 1;
    adj[y][x] = 1;
}

int main(){
    vector<vector<int>> adj(maxV, vector<int>(maxV,0));

    addEdge(adj,0,1); 
    addEdge(adj,0,2); 
    addEdge(adj,0,3); 
    addEdge(adj,2,1); 
    addEdge(adj,2,4);
    addEdge(adj,4,4);

    print2dVector(adj);   
}