class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        
        // Frequency map for s1
        unordered_map<char, int> s1Map;
        for (char c : s1) {
            s1Map[c]++;
        }
        // Sliding window approach
        int windowSize = s1.size();
        unordered_map<char, int> windowMap;
        
        // Initialize the first window
        for (int i = 0; i < windowSize; i++) {
            windowMap[s2[i]]++;
        }
        
        // Check if first window matches
        if (windowMap == s1Map) return true;
        
        // Slide the window
        for (int i = windowSize; i < s2.size(); i++) {
            // Add new character (right side of window)
            windowMap[s2[i]]++;
            
            // Remove old character (left side of window)
            char leftChar = s2[i - windowSize];
            windowMap[leftChar]--;
            if (windowMap[leftChar] == 0) {
                windowMap.erase(leftChar);
            }
            
            // Check if current window matches s1
            if (windowMap == s1Map) return true;
        }
        
        return false;
    }
};







