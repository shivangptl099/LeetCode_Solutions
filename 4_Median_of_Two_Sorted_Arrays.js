var findMedianSortedArrays = function(nums1, nums2) {
    let m1 = 0;
    let m2 = 0;
    if(nums1.length > 0){
        if(nums1.length % 2 !== 0) m1 = nums1[((nums1.length + 1)/2)-1];
        else m1 = (nums1[(nums1.length/2)-1] + nums1[(nums1.length/2)])/2;
    }
    if(nums2.length > 0){
        if(nums2.length % 2 !== 0) m2 = nums2[((nums2.length + 1)/2)-1];
        else m2 = (nums2[(nums2.length/2)-1] + nums2[(nums2.length/2)])/2;
    }
    if(nums1.length === 0) return m2;
    else if(nums2.length === 0) return m1;
    else return (m1+m2)/2;
};
