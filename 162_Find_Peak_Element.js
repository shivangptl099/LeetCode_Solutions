var findPeakElement = function(nums) {
    if(nums.length == 1 || nums[0] > nums[1]) return 0;
    for(let i = 1; i < nums.length; i++){
        if(i == nums.length - 1 && nums[i] > nums[i-1]) return i; 
        else if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) return i;
    }
};
