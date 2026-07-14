class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        bool found = false;
        if(n<2) return 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff = arr[j] - arr[i];
                maxi = max(maxi,diff);
            }
        }
        if(maxi == -1) return 0;
        return maxi;
    }
};
