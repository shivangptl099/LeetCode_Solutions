class Solution {
public:
    string removeOccurrences(string s, string part) {
        int l = part.length();
        bool flag = true;
        while(flag){
            size_t index = s.find(part);
            if(index == string::npos) flag = false;
            else s = s.substr(0, index) + s.substr(index + l);
        }
        return s;
    }
};
