var thousandSeparator = function(n) {
    let s = n.toString();
    if(s.length <= 3) return s;
    s1 = s.slice(0 ,s.length - 3);
    s2 = s.slice(s.length - 3);
    return s1 + "." + s2;
};
