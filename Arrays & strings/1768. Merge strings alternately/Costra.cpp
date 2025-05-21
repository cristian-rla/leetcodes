function findClosestNumber(nums: number[]): number {
    return nums.reduce((acc, num) => {
        if(Math.abs(acc) == Math.abs(num)){
            return (acc > num) ? acc : num;
        }
        
        return (Math.abs(acc) < Math.abs(num)) ? acc : num;
    }, nums[0])

};