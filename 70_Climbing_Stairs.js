var climbStairs = function(n) {
    if(n === 1) return 1;
    else if(n === 2) return 2;
    else{
        let a = 1;
        let b = 2;
        var c;
        for(let i = 3; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
    } 
    return c;
};
