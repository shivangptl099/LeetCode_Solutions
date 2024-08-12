class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>>pq;
    int size;
    KthLargest(int k, vector<int>& nums) {
       size = k;
       int i = 0;
       while(i < nums.size()){
        pq.push(nums[i]);
        if(pq.size() > k){
            pq.pop();
        }
        i++;
       } 
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > size){
            pq.pop();
        }
        return pq.top();
    }
};
