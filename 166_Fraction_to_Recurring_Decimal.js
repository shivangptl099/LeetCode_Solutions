var fractionToDecimal = function(numerator, denominator) {
    let s = (numerator/denominator).toString();
    let indexOfDot = s.indexOf(".")
    let substr3 = s.slice(indexOfDot)
    if(indexOfDot == -1) return s
    if(substr3.length > 4){
        let substr1 = s.substring(0,indexOfDot + 1)
        let substr2 = "(" + s.substring(indexOfDot + 1,indexOfDot + 4) + ")"
        return substr1 + substr2
    }
    else return s
};
