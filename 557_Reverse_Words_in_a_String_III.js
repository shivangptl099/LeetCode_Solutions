var reverseWords = function(s) {
    s = s.split(' ');
    for(let i = 0; i < s.length; i++)
    {
        let temp = s[i];
        let rev_temp = '';
        for(let j = temp.length - 1; j >= 0; j--)
        {
            rev_temp += temp[j];
        }
        s[i] = rev_temp;
    }
    return s.join(' ');
};
