#include <bits/stdc++.h>
using namespace std;

class Student{
public:
	string name;
	int roll;
	int marks;
	
	Student(string n, int r, int m){
		name = n;
		roll = r;
		marks = m;
	}
};

class cmp{
public:
	bool operator()(Student a, Student b){
		if( a.marks != b.marks ) return a.marks < b.marks;
		else return a.roll > b.roll;
	}
};

int main(){

	int n;
	cin>>n;
	
	priority_queue <Student, vector <Student>, cmp> pq;
	
	for(int i = 0; i < n; i++){
		string x;
		int y,z;
		cin>>x>>y>>z;
		Student s(x,y,z);
		pq.push(s);
	}
	
	while(!pq.empty()){
		cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
		pq.pop();
	}

	return 0;
}
