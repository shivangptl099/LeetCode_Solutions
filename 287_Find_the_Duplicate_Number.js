var findDuplicate = function(nums) {
    let map1 = new Map();
    for(let i = 0; i < nums.length; i++){
        if(map1.has(nums[i])) return nums[i];
        else map1.set(nums[i],1);
    }
};
