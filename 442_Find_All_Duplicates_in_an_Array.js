var findDuplicates = function(nums) {
    let map = new Map()
    let ans = []
    for(let i = 0; i < nums.length; i++){
        if(!map.has(nums[i])){
            map.set(nums[i],1)
        }
        else{
            ans.push(nums[i])
        }
    }
    return ans
};
