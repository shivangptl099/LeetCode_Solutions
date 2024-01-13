var countPrimes = function(n) {
    if(n === 0 || n === 1 || n === 2) return 0;
    let count = 0;
    let i = 2;
    while(i<n){
        let j = 2;
        let flag = 0;
        while(j<i){
            if(i%j === 0){
                flag = 1;
                break;
            }
            j++;
        }
        if(flag === 0) count++;
        i++;
    }
    return count;
};
