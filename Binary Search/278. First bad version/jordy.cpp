class Solution {
public:
    int BinS(int l, int r){
        while (l < r){
            int mid = l + (r-l)/2;
            if (isBadVersion(mid) == true){
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
    int firstBadVersion(int n) {

        int l = 1;
        int r = n;
        int min = BinS(l,r);

        return min;

        
        
    }
};