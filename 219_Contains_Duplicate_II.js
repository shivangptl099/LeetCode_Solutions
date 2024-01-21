var containsNearbyDuplicate = function(nums, k) {
    let i = 0;
    while(i < nums.length - 1){
        let t = nums[i];
        let j = i + 1;
        while(j < nums.length){
            if(t === nums[j] && Math.abs(i - j) <= k) return true; 
            j++;
        }
        i++;
    }
    return false;
};
