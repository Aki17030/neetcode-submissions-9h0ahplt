class Solution {
public:
    int characterReplacement(string s, int k) {
        //create the map to store count of char
        unordered_map<char,int> count;
        int res=0;// result, this means the largest substring that can be formed by switching k chars
        int l=0,maxf=0;//l is for left, maxf is for maxfreq at each substring we shall be checking
        for(int r=0;r<s.size();r++){
            count[s[r]]++;//we increase the count of char with value r
            maxf=max(maxf,count[s[r]]);//we simply check which is the more? the maxf or the freq of the char at r?
            while((r-l+1)-maxf>k){//we are basically checking the conditon that r-l+1{size of current window}-maxf>k
                count[s[l]]--;//we decrese the count of the freq at l and move the pointer.
                l++;//pointer is moved
            }
            res=max(res,r-l+1);// again checking which is max? the res or the windowsize.
            //this basically means that we update after the new window size is found and understood.
        }
        return res;
    }
};
