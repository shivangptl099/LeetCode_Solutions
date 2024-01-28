var thirdMax = function(nums) {
    if(nums.length < 3) return Math.max(...nums);
    let arr = [];
    for(let i = 0; i < nums.length; i++)
    {
        if(i == 0)
        {
            arr.push(nums[i]);
        } 
        else if(arr.indexOf(nums[i]) == -1)
        {
            arr.push(nums[i]);
        }
    }
    if(arr.length < 3)
    {
        return Math.max(...arr);
    }
    arr = arr.sort((a,b) => a-b);
    return arr[arr.length - 3];
};
