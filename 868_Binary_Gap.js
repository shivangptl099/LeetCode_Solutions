var binaryGap = function(n) {
    let s = n.toString(2)
    let max = 0
    let count = 1;
    for(let i = 1; i < s.length; i++){
        if(s[i] == '1'){
            if(count >= max) max = count
            count = 1
        }
        else count++
    }
    return max
};
