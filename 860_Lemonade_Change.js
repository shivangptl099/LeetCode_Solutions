var lemonadeChange = function(bills) {
    let bill5 = 0;
    let bill10 = 0;
    for(let i = 0; i < bills.length; i++){
        if(bills[i] == 5) bill5++;
        else if(bills[i] == 10)
        {
            bill5--;
            bill10++;
        } else {
            if(bill10 > 0)
            {
                bill10--;
                bill5--;
            }
            else if(bill5 < 3) return false;
            else bill5 -= 3;
        }
        if(bill5 < 0 || bill10 < 0) return false;
    }
    return true;
};
