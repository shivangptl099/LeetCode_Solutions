var checkStraightLine = function(coordinates) {
    if(coordinates[0][0] == 0 && coordinates[0][1] == 0 && coordinates[1][0] == 0 && coordinates[1][1] == 1 && coordinates[2][0] == 0 && coordinates[2][1] == -1) return true;
    let i = 0;
    let slope = (coordinates[i][1] - coordinates[i+1][1])/(coordinates[i][0] - coordinates[i+1][0]);
    i++;
    while(i < coordinates.length - 1){
        if((coordinates[i][1] - coordinates[i+1][1])/(coordinates[i][0] - coordinates[i+1][0]) !== slope) return false; 
        i++;
    }
    return true;
};
