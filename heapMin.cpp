
// takes inputs then inserts to the heap

#include <bits/stdc++.h>
using namespace std;

#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define ll long long int
#define vtr vector <int>
#define vtr_ll vector <ll>

int main(){

	vtr v;
	int n;
	cin>>n;
	
	while(n--){
		int data; 
		cin>>data;
		v.push_back(data);
		
		int cur_index = v.size() - 1;
		int parent_index = (cur_index - 1) / 2;
		
		while( v[parent_index] > v[cur_index]){
			swap(v[parent_index] , v[cur_index]);
			cur_index = parent_index;
			parent_index = (cur_index - 1) / 2;
		}
	}
	n = v.size();
	for(int i = 0; i < n; i++){
		cout<<v[i]<<" ";
	}

	return 0;
}
