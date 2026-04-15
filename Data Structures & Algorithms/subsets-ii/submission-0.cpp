class Solution {
    vector<vector<int>> answer;
    bool exist(const vector<vector<int>>& answer, const vector<int>& temp){
        for(const auto& existing_vec : answer){
            if(existing_vec==temp){
                return true;
            }

        }
        return false;
    }

    void solve(vector<vector<int>>& answer,vector<int>& temp,int index,vector<int>& nums){
        if(index==nums.size()){
            //if temp does not exist in answer push it.
            if(exist(answer,temp)){
                return;
            }else{
                answer.push_back(temp);
                return;
            }
        }
        int num=nums[index];
        temp.push_back(num);
        solve(answer,temp,index+1,nums);
        temp.pop_back();

        solve(answer,temp,index+1,nums);

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());//important look into it.
        vector<int> temp;
        solve(answer,temp,0,nums);
        return answer;
    }
};