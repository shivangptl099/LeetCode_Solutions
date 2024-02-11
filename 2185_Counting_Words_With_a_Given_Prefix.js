var prefixCount = function(words, pref) {
    let count = 0
    let n = pref.length
    for(let i = 0; i < words.length; i++)
    {
        let s = words[i].slice(0,n)
        if(s == pref) count++
    }
    return count
};
