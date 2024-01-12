var containsDuplicate = function(nums) {
    nums = nums.sort();
    let i = 1;
    let temp = nums[0];
    while(i<nums.length){
        if(temp !== nums[i]){
            temp = nums[i];
        }
        else return true;
        i++;
    }
    if(i === nums.length) return false;
};
