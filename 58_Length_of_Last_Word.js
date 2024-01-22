var lengthOfLastWord = function(s) {
    let i = s.length - 1;
    let f = 0;
    let word = "";
    while(i >= 0){
        if(s[i].charCodeAt(0) >= 97 && s[i].charCodeAt(0) <= 122){
            f = 1;
            word += s[i];
        }
        else if(s[i].charCodeAt(0) >= 65 && s[i].charCodeAt(0) <= 90){
            f = 1;
            word += s[i];
        }
        else{
            if(f === 1) break;
        }
        i--;
    }
    return word.length;
};
