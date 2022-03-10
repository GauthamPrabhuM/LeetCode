class LRUCache {
private:
    class Node {
    public:
        int key, value;
        Node *next, *prev;
        Node(int _key, int _value): key(_key), value(_value) {}
    };
public:
    unordered_map<int, Node*> keyToNodePtr;
    Node *head, *tail;
    int capacity;
    LRUCache(int capacity) {
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
        this->capacity = capacity;
    }
    int get(int key) {
        if (keyToNodePtr.count(key) > 0) {
            Node *node = keyToNodePtr[key];
            int value = node->value;
            remove(node);
            insertToHead(node);
            return value;
        } else {
            return -1;
        }    
    }
    
    void put(int key, int value) {
        if (keyToNodePtr.count(key) > 0) {
            Node *node = keyToNodePtr[key];
            node->value = value; 
            remove(node);
            insertToHead(node);
        } else {
            if (keyToNodePtr.size() == capacity) {
                Node *tailNode = tail->prev;
                remove(tailNode);
                keyToNodePtr.erase(tailNode->key); //  if we don't have `key` recorded in Node class, 
                                                   // we won't be able to remove `key` from mapping
            }
            Node *newNode = new Node(key, value);
            insertToHead(newNode);
            keyToNodePtr[key] = newNode;
        }
        
    }
    
    void remove(Node *node) {
        node->prev->next = node->next; 
        node->next->prev = node->prev;
    }
    
    void insertToHead(Node *node) {
        Node *node1 = head->next;
        node->prev = head;
        node->next = node1;
        node1->prev = node;
        head->next = node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */