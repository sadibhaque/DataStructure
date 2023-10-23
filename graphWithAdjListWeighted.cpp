#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

void solve() {

    ll vertices,edges;
    cin >> vertices >> edges;

    vector<pair<ll,ll>> adjList[vertices];

    for (int i = 0; i < edges; i++){
        ll v1, v2, w;
        cin >> v1 >> v2 >> w;

        adjList[v1].push_back({v2,w});
        adjList[v2].push_back({v1,w});
    }

    for (int i = 0; i < vertices; i++) {
        cout << "Adjacency list for vertex " << i << ": ";
        for (auto & child : adjList[i]) {
            cout << "(" << child.first << ", " << child.second << ") ";
        }
        cout << endl;
    }

}

int main() {

    solve();

    return 0;
}




//INPUT HERE

// 6 9
// 1 3 4
// 1 5 3
// 3 5 2
// 3 4 7
// 3 6 8
// 3 2 9
// 2 6 1
// 4 6 2
// 5 6 3
