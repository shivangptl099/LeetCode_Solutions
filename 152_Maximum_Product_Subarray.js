var maxProduct = function(nums) {
    let c = 0;
    let product = 1;
    for(let i = 0; i < nums.length; i++){
        if(nums[i] <= 0){
        if(c > 0) return product;
        else return 0;   
        }
        else {
            product *= nums[i];
            c++;
        }
    }
    return product;
};
