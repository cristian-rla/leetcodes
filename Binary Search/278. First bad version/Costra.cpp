// Costra

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n, half = low+(high-low) / 2;
        while (low < high){
            if (isBadVersion(half)){
                high = half - 1;
            } else {
                low = half + 1;
            }
            half = low + (high - low) / 2;
        }
        if(!isBadVersion(low))
            low ++;
        return low;
    }
};