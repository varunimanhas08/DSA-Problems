class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        set<int> seen;
        for(auto it: mpp){
            if(seen.count(it.second)){
                return false;
            }
            seen.insert(it.second);
        }
        return true;
    }
};