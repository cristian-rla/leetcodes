class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> map = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
            int n = s.size();
            int total = 0;
            for (int i = 0; i < n-1; i++){
                if (map[s[i]] < map[s[i+1]]){
                    total -= map[s[i]];
                } else {
                    total += map[s[i]];
                }
            }
            return total + map[s[s.size()-1]];
            
        }
    };