var maximumGap = function(nums) {
   if(nums.length === 1) return 0;
   nums = nums.sort((a,b) => a - b);
   let diff = 0;
   for(let i = 0; i < nums.length; i++)
    if(nums[i + 1] - nums[i] > diff) diff = nums[i + 1] - nums[i];
   return diff;
};
