class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> mp; 
public:
    TimeMap() {
        //initialize it
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        //if key doesnt exist.
        //if timestamp doesnt exist.
        if(mp.find(key) == mp.end()){
            return "";
        }
        auto &vec = mp[key]; // this is vector<pair<int,string>>
        int low=0;
        int high=vec.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(vec[mid].first==timestamp){
               
                return vec[mid].second;
            }
            else if(vec[mid].first<timestamp){
                ans=mid;
                low=mid+1;

            }else{
                high=mid-1;
            }
        }
        if(ans==-1) return "";
        return vec[ans].second;
    }
};
