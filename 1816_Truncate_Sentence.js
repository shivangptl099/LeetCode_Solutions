var truncateSentence = function(s, k) {
    s = s.split(" ")
    let ans = []
    for(let i = 0; i < k; i++){
        ans.push(s[i])
    }
    return ans.join(" ")
};
