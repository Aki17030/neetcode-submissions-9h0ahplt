class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,int> mpp;

        for(auto elem:s){
            mpp[elem]++;
        }
        for(auto elem:t){
            mpp[elem]--;
        }
        for(auto elem:mpp){
            if(elem.second>0) return false;
        }
        return true;
    }
};
