var fib = function(n) {
    if(n === 0) return 0;
    else if(n === 1) return 1;
    else{
        let i = 2;
        var f = [0,1];
        while(i <= n){
            f[i] = f[i-1] + f[i-2];
            i++;
        }
        return f[i-1];
    }
};
