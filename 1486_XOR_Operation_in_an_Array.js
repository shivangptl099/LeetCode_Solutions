var xorOperation = function(n, start) {
    let i = 0;
    let s = start;
    start += 2;
    while(i < n - 1){
        s = s ^ start;
        start += 2;
        i++;
    }
    return s;
};
