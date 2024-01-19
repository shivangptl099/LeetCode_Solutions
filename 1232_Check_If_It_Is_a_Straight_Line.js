var checkStraightLine = function(coordinates) {
    let i = 0;
    let slope = (coordinates[i][1] - coordinates[i+1][1])/(coordinates[i][0] - coordinates[i+1][0]);
    i++;
    while(i < coordinates.length - 1){
        if((coordinates[i][1] - coordinates[i+1][1])/(coordinates[i][0] - coordinates[i+1][0]) !== slope) return false; 
        i++;
    }
    return true;
};
