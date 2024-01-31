var reverseOnlyLetters = function(s) {
    s = s.split("");
    let arr = [];
    for(let i = 0; i < s.length; i++){
        if(s[i].charCodeAt(0) >=97 && s[i].charCodeAt(0) <= 122){
            arr.push(s[i]);
            s[i] = -1;
        }
        else if(s[i].charCodeAt(0) >=65 && s[i].charCodeAt(0) <= 90){
            arr.push(s[i]);
            s[i] = -1;
        }
    }
    for(let i = 0; i < s.length; i++){
        if(s[i] == -1){
            let t = arr.pop();
            s[i] = t;
        }
    }
    return s.join("");
};
