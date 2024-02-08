var areNumbersAscending = function(s) {
    let temp = -Infinity
    for(let i = 0; i < s.length; i++){
        if(s[i].charCodeAt(0) >= 48 && s[i].charCodeAt(0) <= 57){
            let j = i + 1
            let s1 = s[i]
            while(j < s.length && s[j].charCodeAt(0) >= 48 && s[j].charCodeAt(0) <= 57){
                s1 += s[j]
                i++
                j++
            }
            let t = parseInt(s1)
            if(t > temp) temp = t
            else {
                return false
            } 
        }
    }
    return true
};
