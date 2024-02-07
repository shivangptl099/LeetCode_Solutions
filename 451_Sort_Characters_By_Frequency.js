var frequencySort = function(s) {
    let map = new Map()
    for(let i = 0; i < s.length; i++){
        map.has(s[i])?(map.set(s[i],map.get(s[i]) + 1)):(map.set(s[i],1))
    }
    let arr = Array.from(map)
    arr = arr.sort((a,b) => b[1] - a[1])
    let ans = ""
    for(let i = 0; i < arr.length; i++){
        for(let j = 0; j < arr[i][1]; j++){
            ans += arr[i][0]
        }
    }
    return ans
};
