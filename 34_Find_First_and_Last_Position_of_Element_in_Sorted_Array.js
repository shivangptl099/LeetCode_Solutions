let low = 0;
    let high = nums.length - 1;
    let arr = [];
    while(low <= high){
        let mid = Math.floor((low + high)/2);
        if(nums[mid] === target){
            if(nums[mid - 1] === target) arr[0] = mid - 1;
            else arr[0] = mid;
            let j = mid + 1;
            while(j < nums.length && nums[j] === target){
                j++;
            }
            if(j - 1 >= 0 && nums[j - 1] === target) arr[1] = j - 1;
            else arr[1] = arr[0];
            break;
        }
        else if(nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    if(arr.length === 0) return [-1,-1];
    return arr;
