#include <bits/stdc++.h>
using namespace std;

int main(){

	map <string, int> mp;
	
	//insertion
	mp.insert({"Sadib",1});
	mp.insert({"Sahib",2});
	
	//initialization
	mp["Labib"] = 3;
	mp["Jahin"] = 4;
	mp["Ayesha"] = 5;
	
	cout<< mp["Ayesha"] <<endl;
	
	//checking if it is available or not 
	if(mp.count("Labib")) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	//iterating
	for(auto i = mp.begin(); i != mp.end(); i++){
		cout<< i->first << " " << i -> second << endl;
	}
	
	cout<<endl<<endl<<endl;
	//word count from a string
	string sentence;
	getline(cin, sentence);
	 
	string word;
	stringstream ss(sentence);
	
	map <string, int> mp1;
	 
	while(ss >> word){
		mp1[word]++;
	}
	
	cout<< "Cricket Word Count : " <<mp1["cricket"]<<endl;
	
	//all word count
	for(auto i = mp1.begin(); i != mp1.end(); i++){
		cout<< i->first << " " << i -> second << endl;
	}

	return 0;
}
