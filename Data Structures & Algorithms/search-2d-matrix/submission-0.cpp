class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //will use binary search
        //there has to be jumps from one row to another in between 
        //the problem->how to jump to the correct rows.
        //Input: matrix = [[1,2,4,8],[10,11,12,13],[14,20,30,40]], target = 10
        //Output: true

        int low=0;
        //the range of numbers will be from 0 to nums[0].size()*nums.size()->12;
        int high=(matrix[0].size()*matrix.size())-1;//this gives me 0-11 index for the total
        //now how do we search??
        int rows=matrix.size();//3;
        int cols=matrix[0].size();//4;
        while(low<=high){
            int mid=(low+high)/2;
            //now we run the binary search on this array, mid here=6 which needs to be index value 12;
            //now how do i reach it?? that is the big question.
            //i need to convert the 6 into into nums[1][2];
            int row=mid/cols;//integer divison 6/4=1;
            int col=mid%cols;//the remainder is6%4=2;
            int value=matrix[row][col];
            if(value==target) return true;
            else if(value>target){
                high=mid-1;//1st iteration this becomes 4
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
