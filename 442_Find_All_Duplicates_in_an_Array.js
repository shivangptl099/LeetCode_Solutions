var findDuplicates = function(nums) {
    let ans = []
    let t = 0
    for(let i = 0; i < nums.length; i++){
        if(nums[i] < 0) t = Math.abs(nums[i]) - 1
        else t = nums[i] - 1
        if(nums[t] > 0) nums[t] = -nums[t]
        else ans.push(Math.abs(nums[i]))
    }
    return ans
};
