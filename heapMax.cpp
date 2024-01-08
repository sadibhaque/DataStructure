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

	vtr v = {50,40,45,30,35,42,32,25,20,10};
	
	int x; 
	cin>>x;
	v.push_back(x);
	
	int cur_index = v.size() - 1;
	int parent_index = (cur_index - 1) / 2;
	
	while( v[parent_index] < v[cur_index]){
		swap(v[parent_index] , v[cur_index]);
		cur_index = parent_index;
		parent_index = (cur_index - 1) / 2;
	}
	int n = v.size();
	for(int i = 0; i < n; i++){
		cout<<v[i]<<" ";
	}

	return 0;
}
