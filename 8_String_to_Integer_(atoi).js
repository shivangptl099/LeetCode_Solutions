var myAtoi = function(s) {
    var n = s.length;
    var myString = "";
    let flag = 0;
    let i = 0;
    while(i<n){
        if(s[i].charCodeAt(0) === 43 || s[i].charCodeAt(0) === 45){
            myString = myString + s[i];
            flag = 1;
        }
        else if(s[i].charCodeAt(0) >= 49 && s[i].charCodeAt(0) <= 57){
            myString = myString + s[i];
            flag = 1;
        }
        else{
            if(flag === 1){
                break;
            }
        }
        i++;
    }
    return parseInt(myString);
};
