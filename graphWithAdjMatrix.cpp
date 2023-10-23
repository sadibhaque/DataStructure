#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

const ll N = 100;
ll graph[N][N];

void solve() {

    ll vertices,edge;
    cin>>vertices>>edge;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            graph[i][j] = 0;
        }
    }
    
    for (int i = 0; i < edge; i++){
        ll v1,v2;
        cin>>v1>>v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }

    for (int i = 0; i < vertices; i++){
        for (int j = 0; j < vertices; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {

    ll t;
    t = 1;
    
    while (t--) {
        solve();
    }

    return 0;
}

//  INPUT HERE

// 6 9
// 1 3
// 1 5
// 3 5
// 3 4
// 3 6
// 3 2
// 2 6
// 4 6
// 5 6
