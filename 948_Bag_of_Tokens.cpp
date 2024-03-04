class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size() < 2){
            if(tokens.size() == 1){
                if(tokens[0] <= power){
                    return 1;
                }
            }
            return 0;
        }
        sort(tokens.begin(), tokens.end());
        int s = 0;
        int e = tokens.size() - 1;
        int max = 0;
        int score = 0;
        while(s <= e){
            if(tokens[s] <= power){
                power -= tokens[s];
                tokens[s] = 0;
                score++;
                s++;
            } else if(tokens[s] > power && score > 0){
                power += tokens[e];
                tokens[e] = 0;
                e--;
                score--;
            } else {
                e--;
            }
            if(max < score){
                max = score;
            }
        }
        return max;
    }
};
