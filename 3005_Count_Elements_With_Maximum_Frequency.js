var maxFrequencyElements = function(nums) {
    let map = new Map()
    let i = 0
    while(i < nums.length)
    {
        if(!map.has(nums[i]))
        {
            map.set(nums[i],1)
        }
        else
        {
            map.set(nums[i],map.get(nums[i]) + 1);
        }
        i++
    }
    let values = Array.from(map.values())
    let max = Math.max(...values)
    i = values.indexOf(max);
    let sum = 0;
    while(i < values.length){
        if(values[i] == max) sum += max;
        i++;
    }
    return sum;
};
