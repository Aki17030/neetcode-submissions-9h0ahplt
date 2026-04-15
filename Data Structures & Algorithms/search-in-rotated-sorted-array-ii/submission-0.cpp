class Solution {
public:
    bool BS(vector<int> &distinct,int target){
        int low=0;
        int high=distinct.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(distinct[mid]==target) return true;
            else if(distinct[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<int> s(nums.begin(),nums.end());
        vector<int> distinct(s.begin(),s.end());
        //now distinct is a sorted vector;
        //apply the binary search in hopes of finding the answer
        return BS(distinct,target);
    }
};