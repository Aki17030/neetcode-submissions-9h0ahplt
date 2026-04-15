class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let s= new Set();
        for(let i = 0; i<nums.length;i++){
            s.add(nums[i]);
        }
        if(s.size===nums.length){
            return false;
        }else{
            return true;
        }
    }
}
