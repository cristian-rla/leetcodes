class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, half = high / 2;
        while (low <= high){
            if (nums[half] == target)  return half;
            if (nums[half] > target )
                high = half - 1;
            else 
                low = half + 1;
            half = low + (high - low) / 2;
        }
        return -1;
    }
};