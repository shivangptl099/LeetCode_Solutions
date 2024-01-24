var numberOfSteps = function(num) {
    let c = 0;
    for(c; num!== 0; c++)
    if(num % 2 === 0) num = num / 2;
    else num--;
    return c;
};
