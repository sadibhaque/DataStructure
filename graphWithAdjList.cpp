#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

void solve() {

    ll vertices,edges;
    cin >> vertices >> edges;

    vector<ll> adjList[vertices];

    for (int i = 0; i < edges; i++){
        ll v1, v2;
        cin >> v1 >> v2;

        adjList[v1].push_back(v2);
        adjList[v2].push_back(v1);
    }

    for (int i = 0; i < vertices; i++){
        cout << "Adjacency list for vertex " << i << ": ";
        for (int j = 0; j < adjList[i].size(); j++){
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }

}

int main() {

    solve();

    return 0;
}
