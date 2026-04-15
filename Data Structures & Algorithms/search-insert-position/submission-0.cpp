class Solution {
public:
    int BS(vector<int>& nums,int target){
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
    int searchInsert(vector<int>& nums, int target) {
        return BS(nums,target);
    }
};


