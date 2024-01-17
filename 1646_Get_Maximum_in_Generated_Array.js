var getMaximumGenerated = function(n) {
    let nums = [];
    nums[0] = 0;
    nums[1] = 1;
    if(n === 0) return 0;
    let i = 2;
    while(i<=n){
        if(i%2 == 0) nums[i] = nums[i/2];
        else nums[i] = nums[(i-1)/2] + nums[((i-1)/2)+1];
        i++;
    }
    return Math.max(...nums);
};
