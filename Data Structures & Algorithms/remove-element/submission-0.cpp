// Input: nums = [0,1,2,2,3,0,4,2], val = 2

// Output: [0,1,3,0,4]

class Solution{
public:
    int removeElement(vector<int>& nums, int val){
        int i=0;
        for(int j =0;j<nums.size();j++){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};

// };


