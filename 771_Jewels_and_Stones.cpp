class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;
        for(char c : jewels){
            st.insert(c);
        }
        int count = 0;
        for(char c : stones){
            if(st.find(c) != st.end()){
                count++;
            }
        }
        return count;
    }
};
