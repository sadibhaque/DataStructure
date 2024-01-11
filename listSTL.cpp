class MyLinkedList {
public:
    list <int> l;
    
    int get(int index) {
        int j = 0;
        int ans = 0;
        for(list<int> :: iterator i = l.begin(); i != l.end(); i++){
            if(j == index){
                ans =  *i;
            }
            j++;
        }
        return ans;
    }
    
    void addAtHead(int val) {
        l.push_front(val);
    }
    
    void addAtTail(int val) {
        l.push_back(val);
    }
    
    void addAtIndex(int index, int val) {
        list<int> :: iterator i = l.begin();
        advance(i,index);
        l.insert(i,val);
    }
    
    void deleteAtIndex(int index) {
        list<int> :: iterator i = l.begin();
        advance(i,index);
        l.erase(i);
    }
};
