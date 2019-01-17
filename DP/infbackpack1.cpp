int dp[C];
memset(dp,-INF,sizeof(dp));
dp[0]=0;
for(int i=0;i<N;i++){
    for(int j=w[i];j<=C;j++){
        for(int k=1;j-k*w[i]>=0;k++){
            dp[j]=max(dp[j−k*w[i]]+k*v[i],dp[j]);
        }
    }
}