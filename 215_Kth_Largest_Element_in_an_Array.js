var findKthLargest = function(nums, k) {
    let i = 1;
    while(i < k){
        let max = Math.max(...nums);
        nums[nums.indexOf(max)] = "";
        nums = nums.filter(x => x!== "");
        i++;
    }
    return Math.max(...nums);
};
