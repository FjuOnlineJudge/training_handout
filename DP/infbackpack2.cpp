memset(dp,-INF,sizeof(dp));
dp[0]=0;
for(int i=0;i<N;i++){
    for(int j=w[i];j<=C;j++){
        dp[j]=max(dp[j−w[i]]+v[i],dp[j]);
    }
}