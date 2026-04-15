class Solution {
    vector<vector<int>> answer;
    void solve(vector<int>& nums,vector<int> temp,vector<bool> used){
        if(temp.size()==nums.size()){
            answer.push_back(temp);
        }
        for(int i=0;i<nums.size();i++){
            if(!used[i]){
                used[i]=true;
                temp.push_back(nums[i]);
                solve(nums,temp,used);
                temp.pop_back();
                used[i]=false;
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        vector<int> temp;
        solve(nums,temp,used);
        return answer;
    }
};
