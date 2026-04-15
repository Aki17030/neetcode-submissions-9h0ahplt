
class MyHashMap {
private:
    vector<pair<int,int>> table;
public:
    MyHashMap() {
        table.resize(10000000,{0,-1});
    }
    
    void put(int key, int value) {
        table[key].second=value;
    }
    
    int get(int key) {
        return table[key].second;
    }
    
    void remove(int key) {
        table[key].second=-1;
        table[key].first=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */