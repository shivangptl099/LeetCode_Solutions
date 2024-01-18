var maximumWealth = function(accounts) {
    let arr = [];
    let i = 0;
    while(i < accounts.length){
        let j = 0;
        let sum = 0;
        while(j < accounts[i].length){
            sum += accounts[i][j];
            j++;
        }
        arr.push(sum);
        i++;
    }
    return Math.max(...arr);
};
