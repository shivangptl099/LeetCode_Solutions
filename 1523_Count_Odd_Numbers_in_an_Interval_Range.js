var countOdds = function(low, high) {
    if(low % 2 === 0){
        if(high % 2 === 0) return (high-low)/2;
        else return ((high+1)-low)/2;
    }
    else{
        if(high % 2 === 0) return ((high+1)-low)/2;
        else return ((high - low)/2) +1;
    }
};
