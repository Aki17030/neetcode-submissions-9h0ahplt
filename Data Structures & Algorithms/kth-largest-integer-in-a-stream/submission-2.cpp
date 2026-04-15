class KthLargest {
public:
    priority_queue<int> pq;
    int n=0;
    KthLargest(int k, vector<int>& nums) {
        //k is the largest value we have to return each time a new number is added
        // to the VECTOR.
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        n=k;
    }
    int add(int val) {
        pq.push(val);
        priority_queue<int> nq=pq;
        
        int m=n-1;
        while(m>0 && !nq.empty()){
            nq.pop();
            m--;
        }
        return nq.empty() ? -1 : nq.top();
    }
};
