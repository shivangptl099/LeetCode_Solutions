var topKFrequent = function(words, k) {
    let map1 = new Map();
    for(let i = 0; i < words.length; i++){
        if(map1.has(words[i])){
            let t = map1.get(words[i]) + 1;
            map1.set(words[i],t);
        }
        else map1.set(words[i],1);
    }
    let arr = [];
    let keys = Array.from(map1.keys());
    if(k === words.length) return keys;
    let values = Array.from(map1.values());
    for(let i = 0; i < k; i++){
        let m1 = Math.max(...values);
        let m2 = keys[values.indexOf(m1)];
        arr.push(m2);
        keys = keys.filter(x => x!== m2);
        values = values.filter(x => x!== m1);
    }
    return arr;
};
