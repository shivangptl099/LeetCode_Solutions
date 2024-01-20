var threeConsecutiveOdds = function(arr) {
    let i = 0;
    while(i<arr.length){
        let count = 0;
        if(arr[i] % 2 !== 0){
            let j = i+1;    
            while(count<3 && j<arr.length){
                if(arr[j] % 2 === 0) break;
                else count++;
                j++;
            }
            if(count === 2) return true;
        }
        i++;
    }
    return false;
};
