var isMonotonic = function(nums) {
    if(nums[0] <= nums[1]){
        let i = 1;
        for(i; i < nums.length - 1; i++){
            if(nums[i] > nums[i+1]) return false;
        }
        if(i === nums.length - 1) return true;
    }
    else if(nums[0] >= nums[1]){
        let i = 1;
        for(i; i < nums.length - 1; i++){
            if(nums[i] < nums[i+1]) return false;
        }
        if(i === nums.length - 1) return true;
    }
};
