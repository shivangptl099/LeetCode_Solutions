var findDisappearedNumbers = function(nums) {
    let arr = [];
    let n = nums.length;
    let map = new Map();
    for(let i = 0; i < nums.length; i++)
    {
        if(!map.has(nums[i])) map.set(nums[i],1);
    }
    for(let i = 1; i <= n; i++)
    {
        if(!map.has(i)) arr.push(i);
    }
    return arr;
};
