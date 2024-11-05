class Solution {
public:
    int minChanges(string s) {
        vector<int> grps;
        int i = 1, count = 1, ans = 0;
        while(i < s.length()){
            if(s[i] == s[i - 1]){
                count++;
            } else {
                grps.push_back(count);
                count = 1;
            }
            i++;
        }
        grps.push_back(count);
        i = 0;
        while(i < grps.size()){
            if(grps[i] % 2 != 0){
                if(grps[i + 1] == 0){
                    grps[i]--;
                    grps[i + 1]++;
                } else {
                    grps[i]++;
                    grps[i + 1]--;
                }
                ans++;
            }
            i++;
        }
        return ans;
    }
};
