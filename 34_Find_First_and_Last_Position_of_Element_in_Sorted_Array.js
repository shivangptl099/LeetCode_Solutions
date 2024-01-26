var searchRange = function(nums, target) {
    let s = nums.indexOf(target);
    let arr = [];
    arr[0] = s;
    while(s < nums.length && nums[s] === target) s++;
    if(nums[s-1] === target) arr[1] = s-1;
    else arr[1] = arr[0];
    return arr;
};
