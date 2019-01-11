int sum = 0;
int arr[5] = {1,2,3,4,5};
for(int i=0;i<5;i++){
    int x = a[i];
    sum += x;
}
for(int x:arr){//can use auto x:arr
    sum += x;
}