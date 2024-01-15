var sortedSquares = function(nums) {
    let i = 0;
    let arr = [];
    while(i < nums.length){
        arr[i] = nums[i]*nums[i];
        i++;
    }
    return arr.sort((a,b) => (a-b));
};
