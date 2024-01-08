var isPalindrome = function(s) {
    var i = 0;
    var myString = new Array();
    while(i < s.length){
        if(s[i].charCodeAt(0) >= 65 && s[i].charCodeAt(0) <= 90){
            myString.push(s[i].toLowerCase());
        }
        else if(s[i].charCodeAt(0) >= 97 && s[i].charCodeAt(0) <= 122){
            myString.push(s[i]);
        }
        i++;
    }
i = 0;
j = myString.length - 1;
var flag = 1;
    while(i<=j){
        if(myString[i] !== myString[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
function checkFlag(flag){
        if(flag === 1){
            return true;
        }
        else if(flag === 0){
            return false;
        }
    }
    return checkFlag(flag);
};
