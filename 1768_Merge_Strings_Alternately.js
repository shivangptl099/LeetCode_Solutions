var mergeAlternately = function(word1, word2) {
    let i = 0;
    let j = 0;
    let s = "";
    while(i < word1.length || j < word2.length){
        if(i < word1.length) s += word1[i];
        if(j < word2.length) s += word2[j];
        i++;
        j++;
    }
    return s;
};
