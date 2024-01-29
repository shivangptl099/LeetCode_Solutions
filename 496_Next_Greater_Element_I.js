var nextGreaterElement = function(nums1, nums2) {
    let ans = [];
    for(let i = 0; i < nums1.length; i++)
    {
        let index = nums2.indexOf(nums1[i]);
        if(index == -1 || index == nums2.length - 1){
            ans.push(-1);
        }
        else {
            let j = index + 1;
            for(; j < nums2.length; j++){
                if(nums2[index] < nums2[j]){
                    ans.push(nums2[j]);
                    break;
                }
            }
            if(j == nums2.length) ans.push(-1);
        }
    }
    return ans;
};
