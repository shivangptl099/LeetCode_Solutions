var sortArrayByParityII = function(nums) {
    let even = []
    let odd = []
    for(let i = 0; i < nums.length; i++){
        if(nums[i] % 2 == 0) even.push(nums[i])
        else odd.push(nums[i])
    }
    let c = 0
    for(let i = 0; i < nums.length; i++){
        if(c == 0){
            nums[i] = even.pop()
            c = 1
        } else {
            nums[i] = odd.pop()
            c = 0
        }
    }
    return nums
};
