var dominantIndex = function(nums) {
    let x = Math.max(...nums);
    let index_x = nums.indexOf(x);
    nums[index_x] = -1;
    if(x >= Math.max(...nums)*2){
        return index_x;
    }
    else{
        return -1;
    } 
};
