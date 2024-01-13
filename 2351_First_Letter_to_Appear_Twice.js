var repeatedCharacter = function(s) {
    let arr = [];
    let i = 0;
    while(i < s.length){
        if(arr.length === 0){
            arr.push(s[i]);
        }
        else{
            let j = 0;
            while(j<s.length){
                if(s[i] === arr[j]) return s[i];
                j++;
            }
            arr.push(s[i]);
        }
        i++;
    }
};
