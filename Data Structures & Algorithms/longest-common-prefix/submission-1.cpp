class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string common="";
        sort(strs.begin(),strs.end());
        string front=strs.front();
        string back=strs.back();
        for(int i=0;i<front.size();i++){
            if(front[i]==back[i]){
                common+=front[i];
            }else{
                break;
            }
        }
        return common;
    }
};