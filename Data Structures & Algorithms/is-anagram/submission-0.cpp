class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int> mpp(26,0);

        for(char i : s){
            mpp[i - 'a']++;
        }

        for(char c : t){
            mpp[c - 'a']--;
        }
        for(auto x : mpp){
            if(x != 0) return false;
        }
        return true;
    }
};
