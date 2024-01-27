var firstUniqChar = function(s) {
    let map1 = new Map();
    for(let i = 0; i < s.length; i++){
        if(map1.has(s[i])){
            let t = map1.get(s[i]) + 1;
            map1.set(s[i],t);
        }
        else{
            map1.set(s[i],1);
        }
    }
    let keys = Array.from(map1.keys());
    let values = Array.from(map1.values());
    let index = values.indexOf(1);
    if(index === -1) return -1;
    return s.indexOf(keys[index]);
};
