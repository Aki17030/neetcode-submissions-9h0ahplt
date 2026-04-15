class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int start=0;
        int n=nums.size();
        int minlen=INT_MAX;


        for(int end=0;end<n;end++){
            sum+=nums[end];
            while(sum>=target){
                minlen=min(minlen,end-start+1);
                sum-=nums[start];  //this is probably the most important part, we are decreasting the index from the start;
                //if the sum becomes less than target the minlen will show the last one.
                start++;
            }
        }
        return (INT_MAX==minlen) ? 0 : minlen;

    }
};