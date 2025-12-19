class MyHashSet {
public:
    int m;
    vector<list<int>>buck;
    int getIdx (int key){
        return key%m ; //to retrive index
    }
    MyHashSet() {
        m = 15000;
        buck = vector<list<int>>(m, list<int>{});
    }
    
    void add(int key) {
        int idx = getIdx(key);
        auto it = find(buck[idx].begin() , buck[idx].end(), key);
        if(it == buck[idx].end())buck[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = getIdx(key);
        auto it = find(buck[idx].begin(), buck[idx].end(), key);
        if(it !=  buck[idx].end())buck[idx].erase(it);
    }
    
    bool contains(int key) {
        int idx = getIdx(key);
        auto it = find(buck[idx].begin(), buck[idx].end(), key);
        return it != buck[idx].end();
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */