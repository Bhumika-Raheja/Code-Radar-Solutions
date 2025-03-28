void fibonacciSeries(int n){
    int a=0,b=1,c;
    for (int i=0;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return ;
}