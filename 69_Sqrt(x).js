var mySqrt = function(x) {
    let i = 1;
    let product = 1;
    if(x <= 1) return x;
    while(product < x){
        product = i*i;
        i++;
    }
    if(product === x) return i-1;
    else if(product > x) return i-2;
};
