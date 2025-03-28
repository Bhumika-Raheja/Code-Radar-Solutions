void fibonacciSeries(int n){
    int a=0,b=1,c;
    printf("0 1 ")
    for (int i=2;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return ;
}