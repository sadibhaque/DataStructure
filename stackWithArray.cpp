#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll stk[100];
ll maxSize = 100;
ll top = 0;

void pop(){
    if(top == 0) return;
    else top--;
}
void push(int x){
    stk[top] = x;
    top++;
}

int main() {

    push(3);
    push(5);
    pop();
    push(1);
    push(2);
    pop();

    for (int i = top-1; i >= 0; i--){
        cout<<stk[i]<<endl;
    }

    return 0;
}