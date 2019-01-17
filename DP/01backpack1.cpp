int dp[N][C];
memset(dp,-INF,sizeof(dp));
dp[0][0]=0;
for(int i=0;i<N;i++){
    for(int j=w[i];j<=C;++j){
        dp[i][j]=max(dp[i-1][j−w[i]]+v[i],dp[i-1][j]);
    }
}