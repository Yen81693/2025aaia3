/// week08-1.cpp LeetCode學習計畫 Martix矩陣第1題
/// 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i=0; i<accounts.size(); i++){
            int now = 0;
            for(int j=0; j<accounts[0].size(); j++){
                now += accounts[i][j];
            }
            ans = max(ans, now);
        }
        return ans;
    }
};
