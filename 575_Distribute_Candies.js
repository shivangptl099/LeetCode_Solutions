var distributeCandies = function(candyType) {
    let arr = [];
    let n1 = candyType.length / 2;
    let map1 = new Map();
    for(let i = 0; i < candyType.length; i++)
    {
        if(!map1.has(candyType[i]))
        {
            map1.set(candyType[i],1);
            arr.push(candyType[i]);
        }
    }
    let n2 = arr.length;
    if(n1 >= n2) return n2;
    else return n1;
};
