var divideString = function(s, k, fill) {
    let ans = []
    let i = 0
    let arr = ""
    while(i < s.length)
    {
        arr += s[i]
        if(arr.length == k)
        {
            ans.push(arr)
            arr = ""
        }
        i++
    }
    if(arr.length != k && arr.length != 0)
    {
        while(arr.length != k) arr += fill
        ans.push(arr)
    }
    return ans
};
