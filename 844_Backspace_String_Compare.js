var backspaceCompare = function(s, t) {
    s = s.split("")
    for(let i = s.length; i >= 0; i--){
        if(s[i] == '#'){
            let j = i-1
            while(s[j] == '#' || s[j] == 1){
                j--
            }
            s[i] = 1
            s[j] = 1
        }
    }
    t = t.split("")
    for(let i = t.length; i >= 0; i--){
        if(t[i] == '#'){
            let j = i-1
            while(t[j] == '#' || t[j] == "1"){
                j--
            }
            t[i] = 1
            t[j] = 1
        }
    }
    s = s.filter(x => x != 1).join("")
    t = t.filter(x => x != 1).join("")
    if(s == t){
        return true
    }
    else{
        return false
    }
};
