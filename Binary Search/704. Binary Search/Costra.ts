function search(nums: number[], target: number): number {
    let low = 0, high = nums.length - 1, half = Math.floor(high / 2);
    while (low <= high){
        if (nums[half] == target)  return half;
        if (nums[half] > target )
            high = half - 1;
        else 
            low = half + 1;
        half = low + Math.floor((high - low) / 2);
    }
    return -1;
    
};