var construct2DArray = function(original, m, n) {
    if(m * n != original.length) return []
    let ans = []
    let k = 0
    for(let i = 0; i < m; i++){
        let arr = []
        for(let j = 0; j < n; j++){
            arr.push(original[k])
            k++
        }
        ans.push(arr)
    }
    return ans
};
