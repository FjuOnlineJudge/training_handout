const int LOG = 20;
int par[N][LOG];

void Doubling(){
    for(int i = 1; i < N; ++i){
        for(int j = 1; j < LOG; ++j){
            par[i][j] = par[par[i][j - 1]][j - 1];
        }
    }
}