#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;++i){
            int complement=target-numbers[i];
            if(mp.count(complement)){
                return {mp[complement]+1,i+1};// we are actually checking if the complement // has been seen by i thus i index is used.
            }
            mp[numbers[i]]=i;   // has been seen by i thus i index is used.
        }
        return {};
    }
    

};

//     unordered_map<int, int> seen; // value -> index

    //     for (int i = 0; i < numbers.size(); ++i) {
    //         int complement = target - numbers[i];
    //         if (seen.count(complement)) {
    //             return {seen[complement] + 1, i + 1}; // 1-based indexing
    //         }
    //         seen[numbers[i]] = i;
    //     }

    //     return {}; // no solution found


    // for(int i=0;i<n;i++){
    //         int complement=target-numbers[i];
    //         if(mp.count(complement)){
    //             return {mp[complement]+1,i+1};//1-based indexing
    //         }
    //         mp[numbers[i]]=i;
    //     }
    //     return {};