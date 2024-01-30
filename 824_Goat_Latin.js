var toGoatLatin = function(sentence) {
    sentence = sentence.split(" ");
    let s1 = "maa";
    for(let i = 0; i < sentence.length; i++){
        let t = sentence[i];
        let m = t[0];
        if(m == "a" || m == "e" || m == "i" || m == "o" || m == "u" || m == "A" || m == "E" || m == "I" || m == "O" || m == "U"){
           t = t + s1;
           sentence[i] = t;
        }else{
            t = t.slice(1);
            t = t + m + s1;
            sentence[i] = t;
        }
        s1 += "a";
    }
    return sentence.join(" ");
};
