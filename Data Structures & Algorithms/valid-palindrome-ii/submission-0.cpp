class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                // Try skipping either the left or right character
                return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
            }
            l++;  // Move inward when characters match
            r--;
        }
        return true;  // If no mismatches found, it's a valid palindrome
    }

private:
    bool isPalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

