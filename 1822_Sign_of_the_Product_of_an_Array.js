var arraySign = function(nums) {
    if(nums.indexOf(0) !== -1) return 0;
    let c = 0;
    for(let i = 0; i < nums.length; i++)
    if(nums[i] < 0) c++;
    if(c % 2 === 0) return 1;
    else return -1;
};
