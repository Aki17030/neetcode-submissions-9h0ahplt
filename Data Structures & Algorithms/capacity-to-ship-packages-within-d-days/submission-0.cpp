class Solution {
public:
    int lowestval(vector<int>& weights){
        int low=weights[0];
        for(int i=0;i<weights.size();i++){
            low=max(low,weights[i]);
        }
        return low;
    }
    int highestval(vector<int>& weights){
        int high=0;
        for(int i=0;i<weights.size();i++){
            high+=weights[i];
        }
        return high;
    }
    int outputat(vector<int>& weights,int capacity){
        //here we have to calculate if the capacity at the current possition is working?
        int currentload=0;
        int dayused=1;
        for(int weight : weights){
            if(weight + currentload > capacity ){
                dayused++;
                currentload=0;
            }
            currentload=currentload+weight;
        }
        return dayused;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        //observation output will be between [lowest val,sum[weights]];
        //then what exactly is the binary search looking for?
        int low=lowestval(weights);
        int high=highestval(weights);
        //now the binary seach must run from low to high.
        while(low<=high){
            int mid=(low+high)/2;
            int midcapacity=outputat(weights,mid);
            if(midcapacity<=days){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};