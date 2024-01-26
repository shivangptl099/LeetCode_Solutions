var isIsomorphic = function(s, t) {
    let map1 = new Map();
    let map2 = new Map();
    for(let i = 0; i < s.length; i++){
        if(!map1.has(s[i])){
            if(map2.has(t[i])) return false;
            else {
                map1.set(s[i],t[i]);
                map2.set(t[i],true);
            }
        }
        else {
            if(map1.get(s[i]) !== t[i]) return false;
        }
    }
    return true;
};
