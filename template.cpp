#include <bits/stdc++.h>
using namespace std;

class node{
	public:
	
	int data;
	node *next;
	
	node(int d){
		data = d;
		next = NULL;
	}
};

void sorrt(node*& head){
	
	for(node* i = head; i -> next != NULL; i = i -> next){
		for(node* j = i -> next; j != NULL; j = j -> next){
			if(j -> data > i -> data){
				swap(j -> data  ,  i -> data);
			}
		}
		
	}
	
}

void print(node* head){
	node *temp = head;
	
	while(temp != NULL){
		cout<< temp -> data <<" ";
		temp = temp -> next;
	}
}


void addLast(node*& head, node*& tail, int data){
	
	node* newNode = new node(data);
	
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		tail -> next = newNode;
		tail = newNode;
	}
	
}

void insert(node*& head, node*& tail, int index, int data){
	
	node* newNode = new node(data);
	
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		if(index == 0){
			newNode -> next = head;
			head = newNode;
		}
		else{
			node* temp = head;
		
			for(int i = 0; i < index - 1; i++){
				temp = temp -> next;
			}
			newNode -> next = temp -> next;
			temp -> next = newNode;
		}
		
	}
}


void dlt(node*& head, int index){
	
	if(head == NULL){
		cout<<"Empty List"<<endl;
		return;
	}
	
	node* temp = head;
	
	if(index == 0){
		head = temp -> next;
		delete temp;
	}
	else{
		for(int i = 0; i < index - 1; i++){
			temp = temp -> next;
		}
		
		node* target = temp -> next;

		if(temp -> next -> next == NULL){
			temp -> next = NULL;
			delete target;
		}
		else{
			temp -> next  = target -> next;
			delete target;
		}
	}
}


int main(){
	
	node *head = NULL;
	node *tail = NULL;
	
	while(true){
		int x;
		cin>>x;
		
		if(x != -1){
			 addLast(head, tail, x);
		}
		else break;
	}
	
	sorrt(head);
	
	
    print(head);

    return 0;
}
