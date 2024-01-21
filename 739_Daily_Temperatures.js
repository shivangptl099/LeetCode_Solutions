var dailyTemperatures = function(temperatures) {
    let answer = [];
    for(let i = 0; i < temperatures.length; i++){
        if(i === temperatures.length - 1){
            answer.push(0);
            break;
        }
        let t = temperatures[i];
        let j = i + 1;
        while(j < temperatures.length){
            if(temperatures[j] > t){
                answer.push(j - i);
                break;
            }
            j++;
        }
        if(j === temperatures.length) answer.push(0);
    }
    return answer;
};
