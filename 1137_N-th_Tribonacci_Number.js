var tribonacci = function(n) {
    if(n === 0) return 0;
    else if(n >= 1 && n <= 2) return 1;
    let fib = [];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    let i = 3;
    while(i <= n){
        fib[i] = fib[i-1] + fib[i-2] + fib[i-3];
        i++;
    }
    return fib[n];
};
