// Costra

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        for(int num : nums){
            if(abs(closest) == abs(num))
                closest = (closest > num) ? closest : num;
            else 
                closest = (abs(closest) < abs(num)) ? closest : num;
            
        }
        return closest;
    }
};