var trailingZeroes = function(n) {
    let c = 0;
    let i = 1;
    let temp = 1;
    while(temp >= 1){
        temp = n / Math.pow(5,i);
        c += Math.floor(temp);
        i++;
    }
    return c; 
};
