class Solution {
    vector<vector<int>> answer;
    void solve(vector<vector<int>>& answer,vector<int>& temp,  vector<bool>& used,vector<int>& nums){
        if(temp.size()==nums.size()){
            answer.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(used[i]) continue;
            if(i>0&&nums[i]==nums[i-1]&&!used[i-1])continue;
            used[i]=true;
            temp.push_back(nums[i]);
            solve(answer,temp,used,nums);
            
            temp.pop_back();
            used[i]=false;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<bool> used(nums.size(),false);
        solve(answer,temp,used,nums);
        return answer;
    }
};