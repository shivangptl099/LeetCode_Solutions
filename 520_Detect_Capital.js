var detectCapitalUse = function(word) {
    if(word.charCodeAt(0) >= 97 && word.charCodeAt(0) <= 122){
        let flag = 0;
        let i = 1;
        while(i<word.length){
            if(word.charCodeAt(i) >= 65 && word.charCodeAt(i) <= 90){
                flag = 1;
                break;
            }
            i++;
        }
        if(flag === 1) return false;
    }
    else if(word.charCodeAt(0) >= 65 && word.charCodeAt(0) <= 90){
        if(word.charCodeAt(1) >= 65 && word.charCodeAt(1) <= 90){
            let flag = 0;
            let i = 2;
        while(i<word.length){
            if(word.charCodeAt(i) >= 97 && word.charCodeAt(i) <= 122){
                flag = 1;
                break;
            }
            i++;
        }
        if(flag === 1) return false;
        }
        else if(word.charCodeAt(1) >= 97 && word.charCodeAt(1) <= 122){
            let flag = 0;
            let i = 2;
        while(i<word.length){
            if(word.charCodeAt(i) >= 65 && word.charCodeAt(i) <= 90){
                flag = 1;
                break;
            }
            i++;
        }
        if(flag === 1) return false;    
        }
    }
    return true;
};
