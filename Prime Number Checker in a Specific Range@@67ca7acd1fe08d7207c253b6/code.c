int printPrimeInRange(int a,int b){
    for (int num=a;num<=b;num++){
        if (num>1){
            int count=0;
            for (int i=2;i<num;i++){
                if (num%i==0){
                    count+=1;
                }
            }
            if (count==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else if (num==1){
            return 0;
        }
    }
}