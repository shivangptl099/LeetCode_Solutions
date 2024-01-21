var calPoints = function(operations) {
    let arr = [];
    for(let i = 0; i < operations.length; i++){
        let t = operations[i];
        if(t === "C") arr.pop();
        else if(t === "D") arr.push(2*arr[arr.length - 1]);
        else if(t === "+") arr.push(arr[arr.length - 1] + arr[arr.length - 2]);
        else arr.push(parseInt(t));
    }
    let sum = 0;
    for(let i = 0; i < arr.length; i++)
    sum += arr[i];
    return sum;
};
