var hammingWeight = function(n) {
    return n.toString(2).padStart(32,'0').split("").filter(x => x !== "0").length;
};
