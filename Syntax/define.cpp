#define one 1
#define ten(x) 10*x
#define sum(x,y) 2*x+y

int main(){
    cout<<1<<'\n';
    cout<<ten(5)<<'\n';
    cout<<sum(1,1)<<'\n';
    cout<<sum(1,1)*ten(2)<<'\n';
}