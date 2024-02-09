var mostWordsFound = function(sentences) {
    let max = 0
    for(let i = 0; i < sentences.length; i++){
        let currentSentence = sentences[i].split(" ")
        if(currentSentence.length > max) max = currentSentence.length
    }
    return max
};
