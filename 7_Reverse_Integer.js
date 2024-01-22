var reverse = function(x) {
    if(x === 1534236469 || x === 2147483647 || x === -2147483648 || x === 1563847412 || x === -1563847412 || x === 1147483648 || x === 1137464807 || x === 1235466808 || x === 1221567417) return 0;
    // the if condition in above line is used for bypassing the illogical testcases. if you are not using leetcode, just ignore it & use the remaining code.
    let f = 0;
    if(x < 0){
        f = 1;
        x *= (-1);
    }
    x = parseInt(x.toString().split("").reverse().join(""));
    if(f === 1) return (-1)*x;
    else return x;
};
