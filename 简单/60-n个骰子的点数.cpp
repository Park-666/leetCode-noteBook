/*动态规划，*/
class Solution {
public:
    vector<double> twoSum(int n) {
        /*建立二维vector，轴1对应骰子个数，轴2对应所有点数之和的情况（从小到大排）*/
        vector<vector<int>> dp(n+1, vector<int>(6*n+1));
        /*计算边界，只有一个骰子的情况*/
        for (int i=1; i<=6; i++) {
            dp[1][i] = 1;
        }
        for (int i=2; i<=n; i++) {
            for (int j=i; j<=6*i; j++) {
                /*这里看动态规划，例：前排几个人*/
                for (int k=1; k<=6; k++) {
                    if (j <= k) {
                        break;
                    }
                    dp[i][j] += dp[i-1][j-k];
                }
            }
        }
        /*计算n个骰子所有可能出现的次数*/
        int all = pow(6, n);
        vector<double> ret;
        /*将结果取出计算概率，存入新的vector*/
        for (int l=n; l<=6*n; l++) {
            ret.push_back(dp[n][l] * 1.0 / all);
        }
        return ret;
    }
};
