var repeatedNTimes = function(nums) {
    let map = new Map()
    for(let i = 0; i < nums.length; i++){
        if(map.has(nums[i])){
            let t = map.get(nums[i]) + 1
            if(t*2 == nums.length){
                return nums[i]
            }
            map.set(nums[i],t)
        }
        else{
            map.set(nums[i],1)
        }
    }
};
