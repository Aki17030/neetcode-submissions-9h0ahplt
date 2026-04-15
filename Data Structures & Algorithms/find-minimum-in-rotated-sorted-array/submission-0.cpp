class Solution {
public:
    int BS(vector<int> &nums){
        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            
            //basic check if the array is already sorted.
            if(nums[low]<=nums[high]) return nums[low];
            // we have to search in the unsorted part;
            int mid=(low+high)/2;
            if(nums[mid]>nums[high]){
                //this means that the left half is sorted.
                //thus look for in right half;
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return nums[low];
    }
    int findMin(vector<int> &nums) {
        //here the target is the minimum number.
        return BS(nums);
    }
};


// if(mid==low || mid==high){
            // }
            // if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]) return mid;
            // //but this case can straight up not work if mid is 1st or last. need to think about it. segfault
            // else if(nums[low]<=nums[mid] && nums[mid]>nums[high]){
            //     //it means it is left sorted.


            // }else{

            // }