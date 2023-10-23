#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

void solve() {

    ll vertices,edges;
    cin >> vertices >> edges;

    ll graph[vertices+1][vertices+1];

    for (int i = 0; i <= vertices; i++) {
        for (int j = 0; j <= vertices; j++) {
            graph[i][j] = 0;
        }
    }

    for (int i = 0; i < edges; i++){
        ll v1, v2, w;
        cin >> v1 >> v2 >> w;

        graph[v1][v2] = w;
        graph[v2][v1] = w;
    }

    for (int i = 0; i <= vertices; i++){
        for (int j = 0; j <= vertices; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main() {

    solve();

    return 0;
}
