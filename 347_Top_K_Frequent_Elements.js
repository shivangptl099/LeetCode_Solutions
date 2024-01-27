var topKFrequent = function(nums, k) {
    if(nums.length === k) return nums;
    let map1 = new Map();
    for(let i = 0; i < nums.length; i++){
        if(map1.has(nums[i])){
            let t = map1.get(nums[i]) + 1;
            map1.set(nums[i],t);
        }
        else {
            map1.set(nums[i],1);
        }
    }
    let arr = [];
    let keys = Array.from(map1.keys());
    let values = Array.from(map1.values());
    for(let i = 0; i < k; i++){
        let index = values.indexOf(Math.max(...values));
        arr.push(keys[index]);
        values[index] = 0;
    }
    return arr;
};
