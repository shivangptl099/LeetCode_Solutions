var isSameAfterReversals = function(num) {
    let s1 = parseInt(num.toString().split("").reverse().join(""))
    s1 = parseInt(s1.toString().split("").reverse().join(""))
    return (s1 == num) ? true : false
};
