class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++){
            int com = target - nums[i];
            if(mpp.find(com) != mpp.end()){
                return {mpp[com],i};
            }

            mpp[nums[i]] = i;
        }
    }
};
