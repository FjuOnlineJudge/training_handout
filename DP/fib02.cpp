int dp[N]
int f(int n){
    if(n<=1)return n;
    if(dp[n])return dp[n];
    return dp[n]=f(n-1)+f(n-2);     
}