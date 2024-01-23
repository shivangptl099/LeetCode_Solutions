var findMedianSortedArrays = function(nums1, nums2) {
    let nums = [...nums1,...nums2].sort((a,b) => a - b);
    if(nums.length % 2 !== 0) return nums[((nums.length + 1)/2)-1];
    else return (nums[(nums.length/2)-1] + nums[(nums.length/2)])/2;
};
