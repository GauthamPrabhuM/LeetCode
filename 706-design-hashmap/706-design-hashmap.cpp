class MyHashMap {
public:
    int keyvalue[10000001]={0}; 
    MyHashMap() {}  
    void put(int key, int value) {
        if(value==0)keyvalue[key]=-1;
        else keyvalue[key]=value;
    }
    int get(int key) {
        if(keyvalue[key]==-1)return 0;
        else if(keyvalue[key]==0) return -1;
        else return keyvalue[key];
    }
    void remove(int key) {
        keyvalue[key]=0;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */