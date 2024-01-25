var repeatedCharacter = function(s) {
    let arr = [];
    for(let i = 0; i < s.length; i++){
        if(arr.length === 0) arr.push(s[i]);
        else if(arr.indexOf(s[i]) !== -1) return s[i];
        else arr.push(s[i]);
    }
};
