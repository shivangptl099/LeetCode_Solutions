var isToeplitzMatrix = function(matrix) {
    if(matrix[0].length == 1) return false
    let firstElement = matrix[0][0]
    for(let i = 0; i < matrix.length; i++){
        if(firstElement != matrix[i][i]) return false
    }
    return true
};
