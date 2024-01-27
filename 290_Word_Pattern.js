var wordPattern = function(pattern, s) {
    s = s.split(" ");
    if(pattern.length !== s.length){
        return false;
    }
    let map1 = new Map();
    let map2 = new Map();
    for(let i = 0; i < pattern.length; i++){
        if(map1.has(pattern[i])){
            if(s[i] !== map1.get(pattern[i])){
                return false;
            } 
        }
        else if(map2.has(s[i])){
            return false;
        }
        else{
            map1.set(pattern[i],s[i]);
            map2.set(s[i],true);
        }
    }
    return true;
};
