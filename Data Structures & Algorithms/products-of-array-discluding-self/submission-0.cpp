class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        vector<int> result(n,1);
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            result[i]=prefix[i]*suffix[i];
        }
        return result;
    }    
};



        // int n=nums.size();
        // int left=0;
        // int right=n-1;
        // int index=0;
        // for(int i=0;i<n;i++){
        //     int left_val=1;
        //     int right_val=1;
        //     int left_val*=nums[i]
        //     nums[index]=right_val*left_val;
        //     index++;
        // }