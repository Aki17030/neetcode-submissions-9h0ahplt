class Solution {
public:


string encode(vector<string>& strs) {
        string s;
        for(string str:strs){
            int n=str.size();
            s+=to_string(n)+"#"+str;
        }
        return s;
}

vector<string> decode(string s) {
    vector<string> output;
    int i = 0;
    while (i < s.size()) {
        int j = i;
        // Find the position of '#'
        while (s[j] != '#') {
            j++;
        }
        // Extract the length
        int len = stoi(s.substr(i, j - i));
        // Extract the word
        string word = s.substr(j + 1, len);
        output.push_back(word);
        // Move to the next encoded word
        i = j + 1 + len;
    }
    return output;
}
};
