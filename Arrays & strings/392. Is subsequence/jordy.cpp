class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ns = s.size();
        int nt = t.size();
        if (nt < ns) return false;
        if (s.empty()) return true;
        int i = 0;
        int j = 0;
        while (i < ns && j < nt){
            if (s[i] == t[j]){
                i++;
                j++;
            } else {
                j++;
            }
        }
        cout << i << " " << j;
        if (i == ns){
            return true;
        } else { return false;}
         
    }
};