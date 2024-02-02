var frequencySort = function(s) {
    let map = new Map()
    for(let i = 0; i < s.length; i++){
        if(map.has(s[i])){
            let t = map.get(s[i])
            map.set(s[i],t+1)
        }
        else{
            map.set(s[i],1)
        }
    }
    let keys = Array.from(map.keys())
    let values = Array.from(map.values())
    let ans = ""
    for(let i = 0; i < s.length; i++){
        let max = Math.max(...values)
        let max_index = values.indexOf(max)
        for(let i = 0; i < max; i++){
            ans += keys[max_index]
        }
        values[max_index] = -1
    }
    return ans
};
