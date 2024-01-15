var bitwiseComplement = function(n) {
    s = n.toString(2).split("");
    let i = 0;
    while(i < s.length){
        s[i] = (s[i] === "0") ? "1" : "0";
        i++;
    }
    return parseInt(s.join(""),2);
};
