int dp[3];
int f(){
    dp[0]=dp[1]=1;
    for(int i=2;i<N;i++){
        dp[i%3]=dp[(i-1+3)%3]+dp[(i-2+3)%3];
    }
}