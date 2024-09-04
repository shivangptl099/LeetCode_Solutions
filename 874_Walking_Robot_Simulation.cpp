class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<vector<int>> mySet;
        for(auto arr : obstacles)
            mySet.insert(arr);
            int x = 0, y = 0, s = 0, t = 1, ans = 0;
        for(int i = 0; i < commands.size(); i++){
            if(commands[i] != -1 && commands[i] != -2){
                int temp = commands[i];
                int j = 0;
                while(j < temp){
                    x += s;
                    y += t;
                    if(mySet.count({x, y}) > 0){
                        if(s != 0){
                            if(s == 1){
                                x--;
                            } else {
                                x++;
                            }
                            break;
                        }
                        else if(t != 0) {
                            if(t == 1){
                                y--;
                            } else {
                                y++;
                            }
                            break;
                        }
                    }
                    j++;
                }
            } else {
                if(s == 0){
                    if(t == 1){
                        //North Left
                        if(commands[i] == -2){
                            s = -1;
                            t = 0;
                        //North Right
                        } else {
                          s = 1;
                          t = 0;  
                        }
                    } else {
                        //South Left
                        if(commands[i] == -2){
                            s = 1;
                            t = 0;
                        //South Right
                        } else {
                          s = -1;
                          t = 0;  
                        }
                    }
                }
                else if(s == 1){
                    //East Left
                    if(commands[i] == -2){
                        s = 0;
                        t = 1;
                    //East Right
                    } else {
                        s = 0;
                        t = -1;  
                    }
                } else {
                    //West Left
                    if(commands[i] == -2){
                        s = 0;
                        t = -1;
                    //West Right
                    } else {
                        s = 0;
                        t = 1;  
                    }
                }
            }
            ans = max(ans, (x * x) + (y * y));
        }
        return ans;
    }
};
