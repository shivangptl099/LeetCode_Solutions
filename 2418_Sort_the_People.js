var sortPeople = function(names, heights) {
    let ans = []
    for(let i = 0; i < names.length; i++){
        let max_index = heights.indexOf(Math.max(...heights))
        ans.push(names[max_index])
        heights[max_index] = -1
    }
    return ans
};
