var largestAltitude = function(gain) {
    let sum = 0;
    let arr = [];
    for(let i = 0; i < gain.length; i++){
        sum += gain[i];
        arr.push(sum);
    }
    let t = Math.max(...arr);
    if(t < 0) return 0;
    else return t;
};
