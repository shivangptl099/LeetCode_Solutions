nums = nums.sort((a,b) => a-b);
    let i = 0;
    let c = 0;
    while(i<nums.length){
        if(nums[i] === 0) c++;
        else break;
        i++;
    }
    nums = nums.filter(x => x!== 0);
    for(i = 0;i<c;i++)
    nums.push(0);
    return nums;
