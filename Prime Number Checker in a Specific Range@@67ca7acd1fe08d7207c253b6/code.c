int printPrimesInRange(int a,int b){
    for (int num=a;num<=b;num++){
        int count=0;
        if (num>1){
            for (int i=2;i<num;i++){
                if (num%i==0){
                    count+=1;
                }
            }
            if (count==0){
                return num;
            }
            else{
                printf("No prime numbers");
            }
        }
    }
}