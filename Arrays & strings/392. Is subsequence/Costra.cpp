class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i  = 0;
        for (char ch : t){
            if (i == s.size()) return true;
            if (s[i] == ch) i++; 
        }
        if (i == s.size()) return true;

        return false;
    }
};