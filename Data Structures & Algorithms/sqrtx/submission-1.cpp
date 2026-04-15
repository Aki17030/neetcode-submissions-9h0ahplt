class Solution {
public:
    int BS(int &x){
        int low=0;
        int high=x;
        while(low<=high){
            int mid = low + (high - low) / 2;
            long long square = 1LL * mid * mid;  // Safe from overflow
            if (square == x) return mid;
            else if (square < x) low = mid + 1;
            else high = mid - 1;
        }
        return high;
    }
    int mySqrt(int x) {
       return BS(x); 
    }
};