var validMountainArray = function(arr) {
    let increase = false;
    let decrease = false;
    let f = 0;
    for(let i = 0; i < arr.length - 1; i++){
        if(arr[i] === arr[i + 1]) return false;
        else if(arr[i] < arr[i + 1]) increase = true;
        else if(arr[i] > arr[i + 1]) decrease = true;
        if(increase && decrease) f = 1;
        if(f === 1 && (increase && decrease) === false) return false;
    }
    return true;
};
