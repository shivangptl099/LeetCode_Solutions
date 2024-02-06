var findAnagrams = function(s, p) {
    let n = p.length
    p = p.split("").sort().join()
    let ans = []
    for(let i = 0; i <= s.length - n; i++){
        let substr = s.substring(i, i + n)
        substr = substr.split("").sort().join()
        if(substr == p) ans.push(i)
    }
    return ans
};
