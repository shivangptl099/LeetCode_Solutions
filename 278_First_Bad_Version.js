var solution = function(isBadVersion) {
    /**
     * @param {integer} n Total versions
     * @return {integer} The first bad version
     */
    return function(n) {
        let s = 1;
        let e = n;
        let ans = -1;
        while(s <= e){
            let mid = Math.floor((s + e)/2);
            if(isBadVersion(mid)){
                ans = mid;
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return ans;
    };
};
