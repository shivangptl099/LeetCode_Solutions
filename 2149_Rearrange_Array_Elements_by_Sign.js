var rearrangeArray = function(nums) {
    let pos = []
    let neg = []
    let i = 0
    while(i < nums.length)
    {
        if(nums[i] >= 0) pos.push(nums[i])
        else neg.push(nums[i])
        i++
    }
    let ans = []
    i = 0
    while(i < (nums.length / 2))
    {
        ans.push(pos[i])
        ans.push(neg[i])
        i++
    }
    return ans
};
