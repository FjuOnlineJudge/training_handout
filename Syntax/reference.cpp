const int N=100;
int a[N][N];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int &x=a[i][j];
        x=i+j;
    }
}