class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        queue<int> q;
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
            q.push(i);
        sort(deck.begin(), deck.end());
        int flag = 0;
        int i = 0;
        while(!q.empty()){
            if(!flag) ans[q.front()] = deck[i++];
            else q.push(q.front());
            q.pop();
            flag ^= 1;
        }
        return ans;
    }
};
