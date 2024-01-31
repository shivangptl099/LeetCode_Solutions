// Method 1 : Using Brute Force With using An array and for loops
function isLetter(char){
    return (char >= 'a' && char <= 'z') || (char >= 'A' && char <= 'Z')
}

var reverseOnlyLetters = function(s) {
    s = s.split("");
    let arr = [];
    for(let i = 0; i < s.length; i++){
        if(isLetter(s[i])){
            arr.push(s[i]);
            s[i] = -1;
        }
    }
    for(let i = 0; i < s.length; i++){
        if(s[i] == -1){
            s[i] = arr.pop();
        }
    }
    return s.join("");
};
// Runtime : 47ms 
// 88.67% Users Beat

//Method 2: Using The Two Pointer Method 
function isLetter(char){
    return (char >= 'a' && char <= 'z') || (char >= 'A' && char <= 'Z')
}

var reverseOnlyLetters = function(s) {
    let left = 0
    let right = s.length - 1
    s = s.split("")
    while(left < right){
        while(left < right && !isLetter(s[left])){
            left++
        }
        while(left < right && !isLetter(s[right])){
            right--
        }

        let temp = s[left]
        s[left] = s[right]
        s[right] = temp

        left++
        right--
    }
    return s.join("")
};
// Runtime : 50ms
// 74% Users Beat
