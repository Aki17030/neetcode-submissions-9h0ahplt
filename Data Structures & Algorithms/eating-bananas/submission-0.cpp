class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    int totalhourstaken(vector<int>& piles, int mid){
        int totalh=0;
        for(int i=0;i<piles.size();i++){
            totalh+=ceil((double)piles[i]/(double)mid);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findmax(piles);
        while(low<=high){
        int mid=(low+high)/2;
        int totalhours=totalhourstaken(piles,mid);
        if(totalhours<=h){
            high=mid-1;
            }else{
            low=mid+1;
            }
        }
        return low;
    }
};
