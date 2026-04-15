class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string token : tokens){
            if(token=="+"){
                int s1=(int)s.top();
                s.pop();
                int s2=s.top();
                s.pop();
                int ans=s1+s2;
                s.push(ans);
            }
            else if(token=="-"){
                int s1=(int)s.top();
                s.pop();
                int s2=s.top();
                s.pop();
                int ans=s2-s1;
                s.push(ans);
            }
            else if(token=="*"){
                int s1=(int)s.top();
                s.pop();
                int s2=s.top();
                s.pop();
                int ans=s1*s2;
                s.push(ans);
            }
            else if(token=="/"){
                int s1=(int)s.top();
                s.pop();
                int s2=s.top();
                s.pop();
                int ans=s2/s1;
                s.push(ans);
            }
            else{
                s.push(stoi(token));
            }


        }
        return s.top();
    }   
};
