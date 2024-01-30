var numJewelsInStones = function(jewels, stones) {
    let count = 0;
    let map = new Map();
    for(let i = 0; i < stones.length; i++){
        if(jewels.indexOf(stones[i]) != -1){
            count++;
        }
    }
    return count;
};
