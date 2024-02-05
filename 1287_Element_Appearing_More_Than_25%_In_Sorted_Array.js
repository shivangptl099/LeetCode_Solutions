var findSpecialInteger = function(arr) {
    if(arr.length == 1) return arr[0]
    let n = Math.floor(arr.length / 4) + 1
    let map = new Map()
    for(let i = 0; i < arr.length; i++){
        if(map.has(arr[i])){
            let t = map.get(arr[i]) + 1
            if(t >= n) return arr[i]
            map.set(arr[i],t)
        }
        else{
            map.set(arr[i],1)
        }
    }
};
