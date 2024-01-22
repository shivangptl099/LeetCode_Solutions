var isPalindrome = function(x) {
    if(x < 0) return false;
    let s = x.toString();
    let i = 0;
    let j = s.length - 1;
    while(i<j){
        if(s[i] !== s[j]) return false;
        i++;
        j--;
    }
    return true;
};
