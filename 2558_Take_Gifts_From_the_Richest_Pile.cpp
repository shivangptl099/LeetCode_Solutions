class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(),gifts.end());
        int i = 0;
        while(i < k)
        {
            pq.push(floor(sqrt(pq.top())));
            pq.pop();
            i++;
        }
        long long sum = 0;
        while(!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};
