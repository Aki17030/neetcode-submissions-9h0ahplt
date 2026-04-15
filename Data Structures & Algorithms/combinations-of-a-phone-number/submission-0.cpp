class Solution {

public:
    map<char,string> mp;
    vector<string> output;
    void solve(string& digits,string& base,int index){
        if(index==digits.size()){
            if(!base.empty()) output.push_back(base);
            return;
        }
        string letters=mp[digits[index]];
        for(char c: letters){
            base.push_back(c);
            solve(digits,base,index+1);
            base.pop_back();
        }
    }    
    vector<string> letterCombinations(string digits) {
        output.clear();
        if(digits.empty()) return output;
        string base="";
        solve(digits,base,0);
        return output;

    }
    Solution() {
    mp['2']="abc";
    mp['3']="def";
    mp['4']="ghi";
    mp['5']="jkl";
    mp['6']="mno";
    mp['7']="pqrs";
    mp['8']="tuv";
    mp['9']="wxyz";
    }
};