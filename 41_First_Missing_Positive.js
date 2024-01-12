var firstMissingPositive = function(nums) {
    nums = nums.sort();
    var max = nums[nums.length - 1];
    var min = nums[0];
    let target = min;
    while(target <= max){
        let low = 0;
        let high = nums.length - 1;
        let mid = (low+high)/2;
        let flag = 0;
        while(low<high){
            if(target === nums[mid]){
                flag = 1;
                break; }
            else if(nums[mid] < target) high = (mid - 1);
            else low = mid + 1;
        }
        if(flag === 0){
            return target;
        }
        target++;
    }
};
