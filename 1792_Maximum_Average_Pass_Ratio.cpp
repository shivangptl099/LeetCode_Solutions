class Solution {
    #define pr pair<double, int>

    void pqpush(priority_queue<pr>& pq, vector<vector<int>>& classes, int i){
        double curr_avg = (double)classes[i][0] / classes[i][1];
        double new_avg = ((double)classes[i][0] + 1) / (classes[i][1] + 1);
        double incr = new_avg - curr_avg;
        pq.push(make_pair(incr, i));
    }
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size();
        priority_queue<pr> pq;
        for(int i = 0; i < classes.size(); i++){
            pqpush(pq, classes, i);
        }
        while(extraStudents--){
            pr curr = pq.top();
            pq.pop();
            int index = curr.second;
            classes[index][0]++;
            classes[index][1]++;
            pqpush(pq, classes, index);
        }
        double ans = 0.0;
        for(auto it : classes)
            ans += (double)it[0] / it[1];
        return ans / n;
    }
};
