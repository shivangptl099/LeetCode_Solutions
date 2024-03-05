class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int x = 0;
        while(i < chars.size()){
            char c = chars[i];
            int j = i + 1;
            while(j < chars.size() && chars[j] == c){
                j++;
            }
            if(j - i - 1 < 1){
                chars[x] = c;
                x++;
            }
            else{
                chars[x] = c;
                x++;
                string s = to_string(j - i);
                for(char c : s){
                    chars[x] = c;
                    x++;
                }
            }
            i = j;
        }
        return x--;
    }
};
