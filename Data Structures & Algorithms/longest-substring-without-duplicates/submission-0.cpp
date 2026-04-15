class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        string word;
        int maxlen=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(word.find(c)!=std::string::npos){//if it already exists.
                maxlen=max(maxlen,(int)word.size());//get the maxlen
                int pos=word.find(c);//get the position of the char
                word=word.substr(pos+1);

            }
            word.push_back(c);
        }

        maxlen=max(maxlen,(int)word.size());
        return maxlen;
    
    
    
    }
};




















// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         string word = "";
//         int maxlen = 0;

//         for (int i = 0; i < n; ++i) {
//             char c = s[i];

//             // If character already in word, we need to reset word
//             if (word.find(c) != string::npos) {
//                 // Update maxlen before resetting
//                 maxlen = max(maxlen, (int)word.size());

//                 // Remove characters from the beginning until the duplicate is gone
//                 // This mimics sliding the window manually
//                 int pos = word.find(c);
//                 word = word.substr(pos + 1); // chop off up to and including the duplicate
//             }

//             word.push_back(c); // Add current character to word
//         }

//         // Final check in case the longest substring is at the end
//         maxlen = max(maxlen, (int)word.size());

//         return maxlen;
//     }
// };
