var toGoatLatin = function(sentence) {
    sentence = sentence.split(" ");
    let lastMaa = "maa";
    for(let i = 0; i < sentence.length; i++){
        let currentWord = sentence[i];
        let firstChar = currentWord[0];
        let c = firstChar.toLowerCase();
        if(c == "a" || c == "e" || c == "i" || c == "o" || c == "u"){
           sentence[i] = currentWord + lastMaa;
        }else{
            sentence[i] = sentence[i].slice(1) + firstChar + lastMaa;
        }
        lastMaa += "a";
    }
    return sentence.join(" ");
};
