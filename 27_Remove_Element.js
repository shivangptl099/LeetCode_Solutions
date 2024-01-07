var removeElement = function(nums, val) {
    var i = 0, n = nums.length;
    while(i<n){
        if(val === nums[i]){
            nums[i] = nums[n-1];
            n--;
        }
        else i++;
    }
    return n;
};
