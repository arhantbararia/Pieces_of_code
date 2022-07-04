class Hashtable {
    std::unordered_map<const void *, const void *> htmap;

public:
    void put(const void *key, const void *value) {
            htmap[key] = value;
    }

    const void *get(const void *key) {
            return htmap[key];
    }

};
// smart and flexible hashtable data structure


