class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i = 0;
        for (; i < word1.size() && i < word2.size(); i++){
            res += word1[i];
            res += word2[i];
        }
        if(word1.size() == word2.size())
            return res;
        else if (word2.size() < word1.size())
            return res + word1.substr(i,word1.size()-i);

        return res + word2.substr(i, word2.size()-i);
    }
};