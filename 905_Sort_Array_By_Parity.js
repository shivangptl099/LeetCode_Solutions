var sortArrayByParity = function(nums) {
    let arr1 = [];
    let arr2 = [];
    for(let i = 0; i < nums.length; i++){
        if(nums[i] % 2 == 0) arr1.push(nums[i])
        else arr2.push(nums[i])
    }
    for(let i = 0; i < arr2.length; i++){
        arr1.push(arr2[i])
    }
    return arr1;
};
