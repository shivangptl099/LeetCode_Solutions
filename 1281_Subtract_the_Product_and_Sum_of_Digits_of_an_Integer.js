var subtractProductAndSum = function(n) {
    let s = n.toString().split("");
    let product = 1;
    let sum = 0;
    let i = 0;
    while(i < s.length){
        product *= parseInt(s[i]);
        sum += parseInt(s[i]);
        i++;
    }
    return product - sum;
};
