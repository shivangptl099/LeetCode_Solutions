var getSum = function(a, b) {
    if(a < 0){
        if(b < 0) for(let i = 0; i > b; i--) a--;
        else for(let i = 0; i < b; i++) a++;
    }
    else {
        if(b < 0) for(let i = 0; i > b; i--) a--;
        else for(let i = 0; i < b; i++) a++;
    }
    return a;
};
