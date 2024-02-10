var findFinalValue = function(nums, original) {
    let i = original
    let j = nums.indexOf(i)
    while(j != -1){
        nums[j] = -1
        i *= 2
        j = nums.indexOf(i)
    }
    return i
};
