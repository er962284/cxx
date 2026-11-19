#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <unordered_map>

class LRUCache {
    int capacity_;

public:
    explicit LRUCache(int capacity);
    
    int get(int key);
    
    void put(int key, int value);
};