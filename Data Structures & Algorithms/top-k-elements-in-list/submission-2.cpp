class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> mpp;

        for (auto i : nums)
            mpp[i]++;

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mpp[a] == mpp[b])
                return a < b;          // optional tie-breaker
            return mpp[a] > mpp[b];    // Higher frequency first
        });

        vector<int> ans;
        unordered_set<int> seen;

        for (auto i : nums) {
            if (seen.find(i) == seen.end()) {
                ans.push_back(i);
                seen.insert(i);

                if (ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};