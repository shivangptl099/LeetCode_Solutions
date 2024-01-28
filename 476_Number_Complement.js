var findComplement = function(num) {
    let s = num.toString(2).split('');
    for(let i = 0; i < s.length; i++)
    {
        if(s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
    return parseInt(s.join(''),2);
};
