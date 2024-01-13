var fizzBuzz = function(n) {
    let i = 1;
    var arr = [];
    while(i <= n){
        if(i % 3 === 0){
            if(i % 5 === 0)arr[i-1] = "FizzBuzz";
            else arr[i - 1] = "Fizz";
        } 
        else if(i % 5 === 0) arr[i - 1] = "Buzz";
        else arr[i - 1] = i.toString();
        i++;
    }
    return arr;
};
