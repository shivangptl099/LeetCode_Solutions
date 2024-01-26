var majorityElement = function(nums) {
    let map1 = new Map();
    map1.set(nums[0],1);
    for(let i = 1; i < nums.length; i++){
        if(map1.has(nums[i])){
            let t = map1.get(nums[i]) + 1;
            map1.set(nums[i],t);
        } else map1.set(nums[i],1);
    }
    let keys = Array.from(map1.keys());
    let values = Array.from(map1.values());
    let n = Math.floor(nums.length / 3);
    let arr = [];
    for(let i = 0; i < values.length; i++)
        if(values[i] > n) arr.push(keys[i]);
    return arr;
};
