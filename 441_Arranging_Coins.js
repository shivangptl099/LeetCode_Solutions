var arrangeCoins = function(n) {
    if(n == 1) return 1;
    let sum = 0;
    let i = 1;
    for(; sum < n; i++)
    sum += i;
    if(sum == n) return i - 1;
    return i - 2;
};
