#include "lru_cache.hpp"

int main() {
    LRUCache cache(3);
    cache.put(1, 100);
    return 0;
}