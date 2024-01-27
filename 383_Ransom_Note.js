var canConstruct = function(ransomNote, magazine) {
    magazine = magazine.split("");
    for(let i = 0; i < ransomNote.length; i++){
        let index = magazine.indexOf(ransomNote[i])
        if(index === -1) return false;
        else {
            magazine[index] = 0;
        }
    }
    return true;
};
