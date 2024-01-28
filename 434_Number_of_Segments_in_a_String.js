var countSegments = function(s) {
    let ans = [];
    let s1 = '';
    for(let i = 0; i < s.length; i++)
    {
        if(s[i] != ' ')
        {
            s1 += s[i];
        }
        else if(s1 != '')
        {
            ans.push(s1);
            s1 = '';
        }
    }
    if(s1 != '')
    {
        ans.push(s1);
    }
    return ans.length;
};
