class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j,k,l;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        unordered_map<char, int> mp3;
        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    if(mp1.find(board[i][j]) != mp1.end()) return false;
                    else mp1[board[i][j]]++;
                }
                if(board[j][i] != '.'){
                    if(mp2.find(board[j][i]) != mp2.end()) return false;
                    else mp2[board[j][i]]++;
                }
            }
            mp1.clear();
            mp2.clear();
        }
        i = 0;
        while(i < 3){
            j = 0;
            while(j < 3){
                if(board[i][j] != '.'){
                    if(mp1.find(board[i][j]) != mp1.end()) return false;
                    else mp1[board[i][j]]++;
                }
                j++;
            }
            j = 3;
            while(j < 6){
                if(board[i][j] != '.'){
                    if(mp2.find(board[i][j]) != mp2.end()) return false;
                    else mp2[board[i][j]]++;
                }
                j++;
            }
            j = 6;
            while(j < 9){
                if(board[i][j] != '.'){
                    if(mp3.find(board[i][j]) != mp3.end()) return false;
                    else mp3[board[i][j]]++;
                }
                j++;
            }
            i++;
        }
        mp1.clear();
        mp2.clear();
        mp3.clear();
        

        i = 3;
        while(i < 6){
            j = 0;
            while(j < 3){
                if(board[i][j] != '.'){
                    if(mp1.find(board[i][j]) != mp1.end()) return false;
                    else mp1[board[i][j]]++;
                }
                j++;
            }
            j = 3;
            while(j < 6){
                if(board[i][j] != '.'){
                    if(mp2.find(board[i][j]) != mp2.end()) return false;
                    else mp2[board[i][j]]++;
                }
                j++;
            }
            j = 6;
            while(j < 9){
                if(board[i][j] != '.'){
                    if(mp3.find(board[i][j]) != mp3.end()) return false;
                    else mp3[board[i][j]]++;
                }
                j++;
            }
            i++;
        }
        mp1.clear();
        mp2.clear();
        mp3.clear();

        i = 6;
        while(i < 9){
            j = 0;
            while(j < 3){
                if(board[i][j] != '.'){
                    if(mp1.find(board[i][j]) != mp1.end()) return false;
                    else mp1[board[i][j]]++;
                }
                j++;
            }
            j = 3;
            while(j < 6){
                if(board[i][j] != '.'){
                    if(mp2.find(board[i][j]) != mp2.end()) return false;
                    else mp2[board[i][j]]++;
                }
                j++;
            }
            j = 6;
            while(j < 9){
                if(board[i][j] != '.'){
                    if(mp3.find(board[i][j]) != mp3.end()) return false;
                    else mp3[board[i][j]]++;
                }
                j++;
            }
            i++;
        }
        mp1.clear();
        mp2.clear();
        mp3.clear();
        return true;
    }
};
