class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        
        vector<pair<int,int>> freqVec;
        for (auto& elem : mp) {
            freqVec.push_back({elem.first, elem.second});
        }
        sort(freqVec.begin(),freqVec.end(),[](auto& a,auto & b){
            return a.second>b.second;
        });
        vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(freqVec[i].first);
        }
        return ans;




    }
};


// vector<int> ans;
        // for(auto& elem : mp){
        //     if(elem.second>=k){ 
        //     ans.push_back(elem.first);
        //     }
        // }

        // return ans;
