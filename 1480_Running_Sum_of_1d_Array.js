var runningSum = function(nums) {
    let i = 0;
    let arr = [];
    let sum = 0;
    while(i<nums.length){
        sum += nums[i];
        arr[i] = sum;
        i++;
    }
    return arr;
};
