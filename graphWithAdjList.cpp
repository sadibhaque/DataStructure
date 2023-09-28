#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define llf double

void addEdge(vector<vector<ll>>& adj, ll x, ll y) {
    adj[x].push_back(y); 
    adj[y].push_back(x);
}

void printAdjList(const vector<vector<ll>>& adj) {
    for (ll i = 0; i < adj.size(); i++) {
        cout << "Adjacency list for vertex " << i << ": ";
        for (ll j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

ll maxV = 5;

int main() {
    vector<vector<ll>> adj(maxV);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 2, 1);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 4);

    printAdjList(adj);
}
