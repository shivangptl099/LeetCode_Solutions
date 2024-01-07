var plusOne = function(digits) {
    var n = digits.length;
    if(digits[n-1] !== 9){
        digits[n-1] += 1; 
    }
    else{
        var i = digits.length - 1;
        while(digits[i] === 9){
            digits[i] = 0;
            i--;
        }
        digits[i] += 1; 
    }
    return digits;
};
