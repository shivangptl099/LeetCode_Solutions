var findKthLargest = function(nums, k) {
    let i = 1;
    nums = nums.sort((a,b) => a-b);
    for(i; i < k; i++)
    nums.pop();
    return nums[nums.length - 1];
};
