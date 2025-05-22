class Solution {
public:
    bool isValid(int num, const vector<int>& piles, int h) {
        int total = 0;
        for (int pile : piles) {
            total += (pile + num - 1) / num; 
            if (total > h)
                return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        while (l < r) {

            int mid = l + (r - l) / 2;
            // cout << mid << endl;
            if (isValid(mid, piles, h)) {
                // cout << "valid " << mid << " "<<endl;
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};