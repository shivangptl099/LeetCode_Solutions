var toHex = function(num) {
    if(num === 0) return "0";
    else if(num === -1) return "ffffffff";
    let str = "";
    while(num > 0){
        let r = num % 16;
        if(r <= 9)
        str +=  r.toString()
        else{
            switch(r){
                case 10: str += "a"; break;
                case 11: str += "b"; break;
                case 12: str += "c"; break;
                case 13: str += "d"; break;
                case 14: str += "e"; break;
                case 15: str += "f"; break;
            }
        }
        num = Math.floor(num/16);
    }
    return str.split("").reverse().join("");
};
