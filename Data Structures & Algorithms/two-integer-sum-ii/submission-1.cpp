class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int ans = target - arr[i];
            if(mp.find(ans) != mp.end()){
                return {mp[ans]+1,i+1};
            }
            mp[arr[i]] = i;
        }
        return {-1,-1};
    }
};
