class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    getConcatenation(nums) {
        let l=nums.length
        for(let i=0;i<l;i++){
            nums.push(nums[i]);
        }
        return nums;
    }
}
        // let n=nums.length;
        // for(let i=0;i<n;i++){
        //     nums.push(nums[i]);
        // }
        // return nums;