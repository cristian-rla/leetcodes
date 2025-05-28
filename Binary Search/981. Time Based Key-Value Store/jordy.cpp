class TimeMap {
    unordered_map<string,vector<pair<int,string>>> map;

    string search(vector<pair<int,string>>& vec, int timestamp){
        int l = 0;
        int r = vec.size() - 1;
        while (l <= r){
            int mid = l + (r - l) / 2;

            if (vec[mid].first == timestamp) return vec[mid].second;
            else if (vec[mid].first > timestamp){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (r >= 0){
            return vec[r].second;
        } else {
            return "";
        }
    }
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        return search(map[key], timestamp);
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */