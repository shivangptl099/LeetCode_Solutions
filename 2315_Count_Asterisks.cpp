class Solution {
public:
    int countAsterisks(string s) {
        int countBar = 0;
        int countAst = 0;
        int i = 0;
        while(i < s.length()){
            if(s[i] == '*' && countBar % 2 == 0) countAst++;
            else if(s[i] == '|') countBar++;
            i++;
        }
        return countAst;
    }
};
