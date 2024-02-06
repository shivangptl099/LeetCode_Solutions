var groupAnagrams = function(strs) {
    let map = new Map()
    for(let i = 0; i < strs.length; i++){
        let soretd_str = strs[i].split("").sort().join("")
        if(map.has(soretd_str)){
            let values_map = map.get(soretd_str)
            values_map.push(strs[i])
        }
        else{
            let key_map = [strs[i]]
            map.set(soretd_str,key_map)
        }
    }
    let ans = Array.from(map.values())
    return ans
};
