var transpose = function(matrix) {
    let ans = [];
    for(let i = 0; i < matrix[0].length; i++){
        let arr = [];
        for(let j = 0; j < matrix.length; j++){
            arr.push(matrix[j][i]);
        }
        ans.push(arr);
    }
    return ans;
};
