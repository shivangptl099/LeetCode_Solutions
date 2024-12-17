class Solution {
    #define p pair<char, int>
public:
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<p> pq;
        {
            unordered_map<char, int> mp;
            for(auto it : s) mp[it]++;
            for(auto it : mp) pq.push(make_pair(it.first, it.second));
        }
        string ans;
        while(!pq.empty()){
            p curr_pair = pq.top(); pq.pop();
            char curr_c = curr_pair.first;
            int x = min(repeatLimit, curr_pair.second);
            curr_pair.second -= x;
            ans.append(x, curr_c);
            if(curr_pair.second > 0){
                if(pq.empty()) break;
                p next_pair = pq.top(); pq.pop();
                char next_c = next_pair.first;
                ans.push_back(next_c);
                next_pair.second--;
                if(next_pair.second > 0) pq.push(next_pair);
                pq.push(curr_pair);
            }
        }
        return ans;
    }
};
