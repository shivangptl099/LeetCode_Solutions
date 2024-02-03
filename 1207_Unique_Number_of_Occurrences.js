var uniqueOccurrences = function(arr) {
    let map = new Map()
    for(let i = 0; i < arr.length; i++){
        if(map.has(arr[i])){
            let t = map.get(arr[i]) + 1
            map.set(arr[i],t)
        }
        else{
            map.set(arr[i],1)
        }
    }
    let values = Array.from(map.values())
    let map1 = new Map();
    for(let i = 0; i < values.length; i++){
        if(map1.has(values[i])){
            let t = map1.get(values[i]) + 1
            map1.set(values[i],t)
        }
        else{
            map1.set(values[i],1)
        }
    }
    let values1 = Array.from(map1.values())
    if(values1.indexOf(1) != -1) return true
    else return false
};
