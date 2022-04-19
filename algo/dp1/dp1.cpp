# include <iostream>
# include <cstdlib>
# include <cstring>
# include <stack>
# define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int dp[100010][3];
int work[100010];
int train[100010];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> work[i];
    }
    for (int i = 0; i < n; i++){
        cin >> train[i];
    }
    memset(dp, 0x3f, sizeof(dp));
    dp[0][0] = dp[0][1] = dp[0][2] = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            cout << dp[i][j] << endl;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        //看看今天是否能工作
        if (work[i-1] == 1){
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        } 
        //看看今天是否能锻炼
        if (train[i-1] == 1){
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        } 
        dp[i][0] = min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2])) + 1; //休息多1天

    }
    int ans = min(dp[n][0], min(dp[n][1], dp[n][2]));
    cout << ans << endl;
    // cout << dp << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            cout << dp[i][j] << endl;
        }
    }
    return 0;
}