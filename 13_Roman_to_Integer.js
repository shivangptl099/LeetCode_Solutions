var romanToInt = function(s) {
    let map = {}
    map['I'] = 1
    map['V'] = 5
    map['X'] = 10
    map['L'] = 50
    map['C'] = 100
    map['D'] = 500
    map['M'] = 1000
    let sum = 0
    for(let i = 0; i < s.length; i++){
       if(map[s[i]] < map[s[i+1]]){
           sum = sum + map[s[i+1]] - map[s[i]]
           i++
       }
       else{
           sum += map[s[i]]
       }
    }
    return sum
};
