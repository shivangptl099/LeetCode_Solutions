var lastStoneWeight = function(stones) {
    if(stones.length === 1) return stones[0];
    while(stones.length >= 2){
        stones = stones.sort((a,b) => a-b);
        if(stones[stones.length - 1] === stones[stones.length - 2]){
            stones.pop();
            stones.pop();
        }
        else{
            let s = Math.abs(stones[stones.length - 1] - stones[stones.length - 2]);
            stones.pop();
            stones.pop();
            stones.push(s);
        }
    }
    if(stones.length === 0) return 0;
    return stones[0];
};
