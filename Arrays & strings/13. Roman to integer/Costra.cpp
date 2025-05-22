class Solution {
public:
    int romanToInt(string s) {
        char last{};
        int sum = 0;
        for (auto curr = s.rbegin(); curr != s.rend(); ++curr){
            switch (*curr){
                case 'I': 
                    sum += (last != 'X' && last != 'V') ? 1:-1;
                    last = 'I';
                    break;
                case 'V': 
                    sum += 5;
                    last = 'V';
                    break;
                case 'X': 
                    sum += (last != 'L' && last != 'C') ? 10:-10;
                    last = 'X';
                    break;
                case 'L': 
                    sum += 50;
                    last = 'L';
                    break;
                case 'C': 
                    sum += (last != 'D' && last != 'M') ? 100:-100;
                    last = 'C';
                    break;
                case 'D': 
                    sum += 500;
                    last = 'D';
                    break;
                case 'M': 
                    sum += 1000;
                    last = 'M';
                    break;
            }
        } 
        return sum;
    }
};

// Not so efficient acc to leetcode
class Solution {
public:
    int romanToInt(string s) {
        static std::unordered_map<char, int> trad = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int last = 0, sum = 0;
        for (auto curr = s.rbegin(); curr != s.rend(); ++curr){
            sum  += ((last > trad[*curr]) ? -1:1)*trad[*curr];
            last = trad[*curr];
        } 
        return sum;
    }
};