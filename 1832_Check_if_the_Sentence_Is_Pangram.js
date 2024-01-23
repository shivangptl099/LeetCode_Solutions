var checkIfPangram = function(sentence) {
    let arr = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"];
    let i = 25;
    while(i >= 0){
        if(sentence.indexOf(arr[i]) === -1) return false;
        else arr.pop();
        i--;
    }
    if(arr.length !== 0) return false;
    return true;
};
