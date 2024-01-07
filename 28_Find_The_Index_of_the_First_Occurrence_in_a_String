var strStr = function(haystack, needle) {
    if(haystack === needle) return 0;
    else if(needle.length === 1){
        var i = 0;
        while(i<haystack.length){
            if(needle === haystack[i]) 
            return i;
            else i++;
        }
        return -1;
    }
    var m = haystack.length, n = needle.length;
    for(var i = 0; i < m - 1; i++){
        var flag = 0,s = -1;
        if(haystack[i] === needle[0]){
            var k = 1;
            var j = i+1;
            while(k < n){
                if(needle[k] !== haystack[j])break;
                else{
                    j++;
                    k++;
                    if(k === n){
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if(flag === 1){
            s = i;
            break;
        }
    }
    return s;
};
