#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> seen; // value -> index

        for (int i = 0; i < numbers.size(); ++i) {
            int complement = target - numbers[i];
            if (seen.count(complement)) {
                return {seen[complement] + 1, i + 1}; // 1-based indexing
            }
            seen[numbers[i]] = i;
        }

        return {}; // no solution found
    }
};