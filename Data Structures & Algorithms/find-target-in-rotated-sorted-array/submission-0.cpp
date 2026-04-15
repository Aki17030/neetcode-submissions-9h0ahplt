class Solution {
public:
    int BS(vector<int> &nums,int target){
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[low]<=nums[mid]){
                //this means the left half is sorted.
                if(nums[low]<=target && nums[mid]>= target){
                    //this means the target lies somewhere in between.
                    high=mid-1;
                }
                else{
                    //this condition means the target is on the other side
                    low=mid+1;
                }
            }
            else{
                //this just means the right half is the sorted one.
                if(nums[mid]<=target && nums[high]>=target){
                    // this means we have entered the sorted half
                    low=mid+1;
                }
                else{
                    //this means the target is on the other side.
                    high=mid-1;
                }
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return BS(nums,target);
    }
};
