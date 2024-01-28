function giveRank(j)
{
    if(j == 1) return 'Gold Medal';
    else if(j == 2) return 'Silver Medal';
    else return 'Bronze Medal';
}
var findRelativeRanks = function(score) {
    let arr = [];
    let j = 1;
    for(let i = 0; i < score.length; i++)
    {
        let index = score.indexOf(Math.max(...score));
        if(j < 4) arr[index] = giveRank(j);
        else arr[index] = String(j);
        j++;
        score[index] = -1;
    }
    return arr;
};
