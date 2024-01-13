var findDisappearedNumbers = function(nums) {
    let max = nums.length;
    var arr = [];
    let i = 0;
    for(i;i < max; i++){
        arr[i] = i+1;
    }
    i = 0;
    while(i < nums.length){
        arr = arr.filter(x => x !== nums[i]);
        i++;
    }
    return arr;
};
