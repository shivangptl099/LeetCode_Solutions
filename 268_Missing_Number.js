var missingNumber = function(nums) {
    let arr = [];
    nums = nums.sort((a,b) => a-b);
    let i = 0;
    let j = 0;
    while(j < nums.length){
        if(nums[j] !== i) arr.push(i);
        else j++;
        i++;
    }
    if(nums.length !== nums[nums.length - 1]) arr.push(nums.length);
    return arr;
};
