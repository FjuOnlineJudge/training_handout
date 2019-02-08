vector<int> p;
bitset<MAXN> is_notp;
void PrimeTable(int n){
    is_notp.reset();
	is_notp[0] = is_notp[1] = 1;
	for (int i = 2; i <= n; i++){
		if(!is_notp[i])p.push_back(i);
		for(int j: p){
            if(i * j > n)break;
            is_notp[i * j] = 1;
            if(i % j == 0)break;
        }
	}
}