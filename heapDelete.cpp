//delete from max heap

#include <bits/stdc++.h>
using namespace std;

#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define ll long long int
#define vtr vector <int>
#define vtr_ll vector <ll>

void insert(vtr& v){
	int n;
	cin>>n;
	
	while(n--){
		int data; 
		cin>>data;
		v.push_back(data);
		
		int cur_index = v.size() - 1;
		int parent_index = (cur_index - 1) / 2;
		
		while(cur_index > 0 && v[parent_index] < v[cur_index]){
			swap(v[parent_index] , v[cur_index]);
			cur_index = parent_index;
			parent_index = (cur_index - 1) / 2;
		}
	}
}

void deleteMax(vtr& v){
	int sz = v.size();
	v[0] = v[sz - 1];
	v.pop_back();
	
	int cur = 0;
	while(true){
		int l = cur * 2 + 1;
		int r = cur * 2 + 2;
		
		if (l < sz - 1 && r < sz - 1){
			int temp;
			if (v[l] > v[r]) temp = v[l];	
			else temp = v[r];				
			
			if (temp > v[cur]) swap(v[cur], temp);	
			else break;
			cur = temp;
		}
		
		else if(l <= sz - 1){
			if(v[l] > v[cur]) swap(v[l] , v[cur]);
			else break;
			cur = l;
		}
		
		else if(r <= sz - 1){
			if(v[r] > v[cur]) swap(v[r] , v[cur]);
			else break;
			cur = r;
		}
		
		else break;
	}
}

int main(){

	vtr v;	
	
	insert(v);
	int n = v.size();
	for(int i = 0; i < n; i++){
		cout<<v[i]<<" ";
	}
	
	cout<<endl;
	
	deleteMax(v);
	n = v.size();
	for(int i = 0; i < n; i++){
		cout<<v[i]<<" ";
	}

	return 0;
}
