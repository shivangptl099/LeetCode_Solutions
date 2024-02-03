var intersection = function(nums1, nums2) {
    let ans = []
    for(let i = 0; i < nums2.length; i++){
        let index = nums1.indexOf(nums2[i])
        if(index != -1){
            if(ans.indexOf(nums2[i]) == -1){
                ans.push(nums2[i])
            }
            nums2[i] = 1001
            nums1[index] = 1001
        }
    }
    return ans
};
