var areOccurrencesEqual = function(s) {
    let map = new Map()
    for(let i = 0; i < s.length; i++)
        map.has(s[i])?map.set(s[i], map.get(s[i]) + 1):map.set(s[i],1)
    let values = Array.from(map.values())
    let temp = values[0]
    for(let i = 1; i < values.length; i++)
        if(values[i] != temp) return false
    return true
};
