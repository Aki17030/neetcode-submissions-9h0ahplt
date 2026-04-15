class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x==y){
                continue;
            }else if(x<y){
                y=y-x;
                pq.push(y);
            }
            else if(x>y){
                x=x-y;
                pq.push(x);
            }
        }
        if(pq.size()==0) return 0;
        return pq.top();
    }
};
