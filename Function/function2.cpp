int ans;
void f(int i){
    if(i==1){
        ans=1;
        return;
    }
    f(i-1);
    ans*=i;
    return;
}