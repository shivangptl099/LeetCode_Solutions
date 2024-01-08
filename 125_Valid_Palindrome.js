var isPalindrome = function(s) {
    var i = 0;
    var myString = new Array();
    while(i < s.length){
        if(s[i].charCodeAt(0) >= 65 && s[i].charCodeAt(0) <= 90){
            myString.push(s[i]);
        }
        else if(s[i].charCodeAt(0) >= 97 && s[i].charCodeAt(0) <= 122){
            myString.push(s[i]);
        }
        i++;
    }
