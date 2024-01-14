var findMaxConsecutiveOnes = function(nums) {
    let i = 0;
    let max = 0;
    while(i < nums.length){
        let count = 0;
        if(nums[i] === 1){
            count++;
            let j = i+1;
            while(nums[j] === 1){
                count++;
                j++;
            }
            if(max<count) max = count;
        }
        i++;
    }
    return max;
};
