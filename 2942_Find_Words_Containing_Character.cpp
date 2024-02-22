class Solution {
public:
    bool contains(string s, char x){
        for(auto it : s){
            if(it == x){
                return true;
            }
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i = 0; i < words.size(); i++){
           if(contains(words[i],x)){
               ans.push_back(i); 
           }
        }
        return ans;
    }
};
