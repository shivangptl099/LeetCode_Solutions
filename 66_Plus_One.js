var plusOne = function(digits) {
    var i = digits.length - 1;
    var sum = 0;
    while(i >= 0){
        if(i === digits.length){
            sum = sum + digits[i];
        }
        else{
            let j = digits.length - 1;
            var f = 1;
            while(j>i){
                f *= 10;
                j--;
            }
            sum += f*digits[i];  
        }
        i--;
    }
    sum++;
    var arr = new Array();
    var s = sum.toString();
    for(i = 0; i < s.length; i++){
        arr.push(parseInt(s[i]));
    }
    return arr;
};
