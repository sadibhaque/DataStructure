#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll que[100];
ll f=0,r=0;

void enq(int x){
    que[r] = x;
    r++;
}
void deq(){
    f++;
}
int main()
{
    
    enq(2);
    enq(3);
    enq(4);
    deq();

    for (int i = f; i < r; i++) cout<<que[i]<<" ";
}
