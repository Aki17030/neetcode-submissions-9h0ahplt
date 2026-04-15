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
    int i=0;
    //what are we doing?
    while(i<s.size()){
        // this is basically going to scan the entire vector;
        // we are searching for "#";
        int j=i;//j will store the value of index of "#";
        while(s[j]!='#'){
            j++;
        }
        // now once the upper loop breaks, we have the value of index of '#';
        int len=stoi(s.substr(i,j-i));//this is simply storing the value of len
        string word=s.substr(j+1,len);
        output.push_back(word);
        
        //the next encoded word
        i=j+1+len;
        
    }
    return output;
    }
};



// int i = 0;
    // while (i < s.size()) {
    //     int j = i;
    //     // Find the position of '#'
    //     while (s[j] != '#') {
    //         j++;
    //     }
    //     // Extract the length
    //     int len = stoi(s.substr(i, j - i));
    //     // Extract the word
    //     string word = s.substr(j + 1, len);
    //     output.push_back(word);
    //     // Move to the next encoded word
    //     i = j + 1 + len;
    // }
