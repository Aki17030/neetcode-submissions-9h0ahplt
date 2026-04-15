class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto x : strs){
            string temp=x;
            sort(x.begin(),x.end());
            mp[x].push_back(temp);
        }
        //now just read through the map and insert stuff into the ans
        for(auto elem : mp){
            vector<string> temp=elem.second;
            ans.push_back(temp);
        }
        return ans;
    }
};
