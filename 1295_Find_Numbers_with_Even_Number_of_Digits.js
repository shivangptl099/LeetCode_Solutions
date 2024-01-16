var findNumbers = function(nums) {
    let i = 0;
    let count = 0;
    while(i < nums.length){
        let s = nums[i].toString().length;
        if(s % 2 === 0) count++;
        i++;
    }
    return count;
};
