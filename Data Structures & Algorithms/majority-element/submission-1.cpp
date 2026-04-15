class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]=mpp[nums[i]]+1;//check if the answer exists     
                                        //and if it does not you simply create and increse it.
        }
        set<int> s(nums.begin(),nums.end());
        int hs=s.size();
        for(auto elem: s){
            if(mpp[elem]>n/2){
                return elem;
            }
        }
    }   

};