var nextGreatestLetter = function(letters, target) {
    let arr = [];
    for(let i = 0; i < letters.length; i++)
    if(target < letters[i]) arr.push(letters[i]);
    if(arr.length === 0) return letters[0];
    arr = arr.filter(x => x!== target).sort();
    return arr[0];
};
