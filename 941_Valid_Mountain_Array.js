var validMountainArray = function(arr) {
    if(arr.length < 3) return false;
    let f = 0;
    if(arr[0] >= arr[1]) return false;
    let i = 1;
    for(i; i < arr.length - 1; i++){
        if(arr[i] === arr[i + 1]) return false;
        if(arr[i] > arr[i + 1]){
            f = 1;
            break;
        }
    }
    if(f !== 1) return false;
    let j = i + 1;
    for(j; j < arr.length - 1; j++)
    if(arr[j] <= arr[j + 1]) return false;
    return true;
};
