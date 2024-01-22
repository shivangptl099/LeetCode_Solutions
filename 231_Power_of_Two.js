var isPowerOfTwo = function(n) {
    if(n === 1) return true;
    if(n % 2 !== 0) return false;
    let i = 2;
    while(i < n) i *= 2;
    if(i === n) return true;
    return false;
};
