class ProductOfNumbers {
public:
    vector<int> nums;
    ProductOfNumbers() {

    }
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int n = nums.size() - 1, ans = 1;
        while(k--){
            ans *= nums[n--];
        }
        return ans;
    }
};
