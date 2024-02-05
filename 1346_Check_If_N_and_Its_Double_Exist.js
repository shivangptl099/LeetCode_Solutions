var checkIfExist = function(arr) {
    for(let i = 0; i < arr.length; i++){
        let x = arr.indexOf(arr[i]*2)
        if(x != -1 && x != i){
            return true
        }
    }
    return false
};
