var percentageLetter = function(s, letter) {
    let count = 0;
    let len = s.length;
    for(let i = 0; i < len; i++)
    {
        if(letter == s[i]) count++;
    }
    return Math.floor((count / len) * 100)
};
