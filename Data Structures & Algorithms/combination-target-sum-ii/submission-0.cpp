class Solution {
    void solve(vector<int>& candidates, int target,vector<int>& temp,vector<vector<int>>& ans,int idx){
        if(target < 0){
            return;
        }
        if(target==0){
            ans.push_back(temp);
        }
        //solve
        for(int i=idx;i<candidates.size();++i){
            if(i> idx && candidates[i]==candidates[i-1]){
                continue;
            }
            temp.push_back(candidates[i]);
            solve(candidates,target-candidates[i],temp,ans,i+1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        solve(candidates,target,temp,ans,0);
        return ans;

    }
};
