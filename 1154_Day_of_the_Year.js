var dayOfYear = function(date) {
    let year = parseInt(date.slice(0,4))
    let isLeapYear = true
    if(year % 4 != 0){
        isLeapYear = false
    }
    else{
        if(year % 100 == 0){
            if(year % 400 != 0) isLeapYear = false
        }
    }
    let month = parseInt(date.slice(5,7))
    let days = 0
    for(let i = 1; i <= month; i++){
        let t = 0
        switch(i){
            case 1: t = 0; break;
            case 2: t += 31; break;
            case 3: t += 28; break;
            case 4: t += 31; break;
            case 5: t += 30; break;
            case 6: t += 31; break;
            case 7: t += 30; break;
            case 8: t += 31; break;
            case 9: t += 31; break;
            case 10: t += 30; break;
            case 11: t += 31; break;
            case 12: t += 30; break;
        }
        days += t
    }
    if(month >= 3 && isLeapYear){
        days++
    }
    let currentDate = parseInt(date.slice(8,10))
    days += currentDate
    return days
};
