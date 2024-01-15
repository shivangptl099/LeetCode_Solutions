var heightChecker = function(heights) {
    let arr = [...heights];
    arr = arr.sort((a,b) => a-b);
    let i = 0;
    let count = 0;
    while(i < heights.length){
        if(heights[i] != arr[i]) count++;
        i++;
    }
    return count;
};
