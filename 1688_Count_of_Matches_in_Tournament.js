var numberOfMatches = function(n) {
    let sum = 0;
    while(n>1){
       let s = Math.floor(n/2);
       sum += s;
       n = n - s; 
    }
    return sum;
};
