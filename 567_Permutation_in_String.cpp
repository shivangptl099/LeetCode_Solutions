class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        unordered_map<char, int> s1_count;
        unordered_map<char, int> s2_count;
        for(char c : s1){
            s1_count[c]++;
        }
        int e = 0;
        while(e < s1.size()){
            s2_count[s2[e]]++;
            e++;
        }
        bool flag = true;
        for(char c : s1){
            if(s1_count[c] != s2_count[c]){
                flag = false;
                break;
            }
        }
        if(flag) return true;
        int s = 0;
        while(e < s2.size()){
            s2_count[s2[s]]--;
            s++;
            s2_count[s2[e]]++;
            e++;
            flag = true;
            for(char c : s1){
                if(s1_count[c] != s2_count[c]){
                    flag = false;
                    break;
                }
            }
            if(flag) return true;
        }
        return false;
    }
};
