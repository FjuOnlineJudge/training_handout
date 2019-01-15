dp[N];
memset(dp,-INF,sizeof(dp));
dp[0]=0;
for(int i=0;i<N;i++){
    for(int j=C;j>=w[j];j--){
        dp[j]=max(dp[j−w[i]]+v[i],dp[j]);
    }
}