var isValid = function(s) {
    let i = 0;
    let arr = [];
    while(i < s.length){
        if(s[i] === "(" || s[i] === "[" || s[i] === "{") arr.push(s[i]);
        else if(s[i] === ")"){
            if(s[arr.length - 1] !== "(") return false;
            else{
                arr.pop();
            }
        }
        else if(s[i] === "]"){
            if(s[arr.length - 1] !== "[") return false;
            else{
                arr.pop();
            }
        }
        else if(s[i] === "}"){
            if(s[arr.length - 1] !== "{") return false;
            else{
                arr.pop();
            }
        }
        i++;
    }
    if(arr.length !== 0) return false;
    return true;
};
