class Solution {
public:
    bool squareIsWhite(string coordinates) {
            int x = coordinates[0] - 'a';
            int y = coordinates[1];
            if(x % 2 == 0)
                if(y % 2 == 0) return true;
                else return false;
            else
                if(y % 2 == 0) return false;
                else return true;
        }
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return squareIsWhite(coordinate1) == squareIsWhite(coordinate2);
    }
};
