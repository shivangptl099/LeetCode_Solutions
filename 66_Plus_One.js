var plusOne = function(digits) {
    let s = digits.join("");
    s = BigInt(s) + 1n;
    s = s.toString();
    digits = [];
    for(let i = 0; i < s.length; i++)
    digits.push(parseInt(s[i]));
    return digits;
};
