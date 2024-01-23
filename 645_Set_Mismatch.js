var findErrorNums = function(nums) {
    let arr = [];
    let n = nums.length;
    let x;
    nums = nums.sort((a,b) => (a-b));
    for(let i = 0; i < n - 1; i++){
        if(nums[i] === nums[i + 1]){
            arr.push(nums[i]);
            x = i + 1;
            break;
        }
    }
    nums.splice(x,1);
    for(let i = 1; i <= n; i++){
        if(nums[i - 1] !== i) {
            arr.push(i);
            break;
        }
    }
    if(arr.length === 1) arr.push(n);
    return arr;
};
