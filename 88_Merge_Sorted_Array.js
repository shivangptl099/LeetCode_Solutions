var merge = function(nums1, m, nums2, n) {
    nums1 = nums1.filter(x => x!== 0);
    let i = 0;
    while(i<nums2.length){
        nums1.push(nums2[i]);
        i++;
    }
    return nums1.sort();
};
