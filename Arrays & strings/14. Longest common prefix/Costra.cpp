class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs[0].size() == 0)
            return "";
        
        std::string prefix ="";
        char ch {};
        int lim = strs[0].size();
        
        for(int i = 0; i < lim; i++){
            ch = strs[0][i];

            for(const std::string& word:strs){
                if (i == word.size() || word[i] != ch) return prefix;
            }
            prefix += ch;

        }
        return prefix;
    }
};