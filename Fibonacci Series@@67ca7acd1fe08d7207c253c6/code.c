void fibonacciSeries(int a){
    int a=0,b=1;
    for (int i=0;i<a;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return ;
}