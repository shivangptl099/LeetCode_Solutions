var sortSentence = function(s) {
    s = s.split(" ")
    let map = []
    for(let i = 0; i < s.length; i++){
        let currentWord = s[i]
        let lastCharOfWord = currentWord[currentWord.length - 1]
        map[lastCharOfWord] = currentWord.substring(0,currentWord.length - 1)
    }
    return map.join(" ").substring(1)
};
