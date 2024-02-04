var duplicateZeros = function(arr) {
    for(let i = 0; i < arr.length; i++){
        if(arr[i] == 0){
            let j = arr.length - 1
            while(j > i)
            {
                arr[j] = arr[j-1]
                j--
            }
            i++
        }
    }
};
