var addToArrayForm = function(num, k) {
    let s = (BigInt(num.join("")) + BigInt(k)).toString();
    let arr = [];
    let i = 0;
    while(i < s.length){
        arr[i] = parseInt(s[i]);
        i++;
    }
    return arr;
};
