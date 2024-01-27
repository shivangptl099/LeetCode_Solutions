function isVowel(m){
    if(m == "a" || m == "e" || m == "i" || m == "o" || m == "u") return true;
    else return false;
}
var reverseVowels = function(s) {
    s = s.split("");
    let i = 0;
    let j = s.length - 1;
    while(i < j){
        if(!isVowel(s[i].toLowerCase())) i++;
        else if(!isVowel(s[j].toLowerCase())) j--;
        else{
            let temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    return s.join("");
};
