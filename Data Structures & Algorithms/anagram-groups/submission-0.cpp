class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string,vector<string>> mpp;

        for(string s : strs){
            string temp = s;
            sort(temp.begin(),temp.end());

            mpp[temp].push_back(s);
        }

        vector<vector<string>> ss;

        for(auto it : mpp){
            ss.push_back(it.second);
        }
        return ss;
    }
};
