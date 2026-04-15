class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // Custom comparator: sort by distance to x, then by value
        auto comp = [x](int a, int b) {
            int da = abs(a - x), db = abs(b - x);
            return da < db || (da == db && a < b);
        };

        // Copy and sort the array using the comparator
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end(), comp);

        // Take the first k elements
        vector<int> result(sorted.begin(), sorted.begin() + k);

        // Sort the result to return in ascending order
        sort(result.begin(), result.end());
        return result;
    }
};