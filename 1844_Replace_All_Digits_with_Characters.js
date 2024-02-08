var replaceDigits = function(s) {
    s = s.split("")
    for(let i = 1; i < s.length; i+=2){
        s[i] = String.fromCharCode(s[i - 1].charCodeAt() + Number(s[i]))
    }
    return s.join("")
};
