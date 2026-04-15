class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    getConcatenation(nums) {
        let n=nums.length;
        let ans=[...nums];
        for(let i=0;i<n;i++){
            ans.push(nums[i]);
        }
        return ans;
    }
}


