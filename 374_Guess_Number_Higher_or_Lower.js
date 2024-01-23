var guessNumber = function(n) {
    let p = 2;
    let low = 1;
    let high = n;
    while(p !== 0){
        let mid = Math.abs((low + high)/2);
        p = guess(mid);
        if(p === 0) return mid;
        else if(p === 1) low = mid + 1;
        else high = mid - 1;
    }
};
