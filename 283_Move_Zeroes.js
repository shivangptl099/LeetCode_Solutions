var moveZeroes = function(nums) {
    nums = nums.sort((a,b) => b-a);
    let i = nums.length - 1;
    let count = 0;
    while(i>=0){
        if(nums[i] !== 0)break;
        else{
            count++;
            nums.pop();
        }
        i--;
    }
    nums.reverse();
    for(i = 0; i<count; i++)
    nums.push(0);
    return nums;
};
