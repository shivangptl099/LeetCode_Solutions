var maxProfit = function(prices) {
    let i = 0;
    let min = prices[i];
    let maxProfit = 0;
    while(i < prices.length){
        if(prices[i] < min) min = prices[i];
        if(prices[i] - min > maxProfit) maxProfit = prices[i] - min;
        i++;
    }
    return maxProfit;
};
