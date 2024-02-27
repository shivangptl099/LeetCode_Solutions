class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> morseCodes;
        for(string s : words){
            int i = 0;
            string temp = "";
            while(i < s.length()){
                int index = s[i] - 'a';
                temp += arr[index];
                i++;
            }
            morseCodes.push_back(temp);
        }
        set<string> s1;
        for(string s : morseCodes){
            s1.insert(s);
        }
        return s1.size();
    }
};
