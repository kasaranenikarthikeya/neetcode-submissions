class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();

        int mini = INT_MAX;
        int maxi = INT_MIN;
        int ans = 0;
        int i = 0;
        int j = nums.size()-1;
        while(i <= j){
            int dis = j - i;
            mini = min(nums[i],nums[j]);
            ans  = dis * mini;
            maxi = max(maxi,ans);
            if(nums[i]<nums[j]) i++;
            else j--;
        }
        return maxi;
    }
};
