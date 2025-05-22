class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int p1 = 0;
        int n2 = word2.size();
        int p2 = 0;
        string ans = "";

        while (p1 < n1 && p2 < n2){
            if (p1 <= p2){
                ans += word1[p1];
                p1++;
            } else {
                ans += word2[p2];
                p2++;
            }
        }

        while (p1 < n1){
            ans += word1[p1];
            p1++;
        }

        while (p2 < n2){
            ans += word2[p2];
            p2++;
        }
        
        return ans;
    }
};