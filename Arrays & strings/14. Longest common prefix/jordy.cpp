class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        if (strs.empty()) return "";
        string pre = "";
        for (int i = 0; i < n; i++){
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++){
                if (i >= strs[j].size() || strs[j][i] != c){
                    return strs[0].substr(0,i);
                }
                
            }
        }
        return strs[0];
    }
};