var countOperations = function(num1, num2) {
    let count = 0;
    while(num1 != 0 && num2 > 0)
    {
        num1 < num2 ? (num2 -= num1) : (num1 -= num2);
        count++;
    }
    return count;
};
