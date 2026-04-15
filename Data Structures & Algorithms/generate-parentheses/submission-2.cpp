class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result,"",0,0,n);
        return result;
    }
private:
    void backtrack(vector<string>& result,
                    string current,
                    int opencount,
                    int closecount,
                    int n){
        if(current.size()==2*n){
            result.push_back(current);
            return;
        }
        if(opencount<n){
            backtrack(result,current+"(",opencount+1,closecount,n);
        }
        if(closecount<opencount){
            backtrack(result,current+")",opencount,closecount+1,n);
        }
    }
};
