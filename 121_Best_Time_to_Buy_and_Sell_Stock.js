var maxProfit = function(prices) {
    let i = 0;
    let max = 0;
    while(i < prices.length - 1){
        j = i + 1;
        while(j<prices.length){
            if(prices[j] - prices[i] > max) max = prices[j] - prices[i];
            j++;
        }
        i++;
    }
    return max;
};
