int searchInRotatedArray(int arr[],int n,int target){
    int indexx=0,count=0,result;
    for (int i=0;i<n;i++){
        if (arr[i]==target){
            indexx=i;
            count++;
            break;
        }
    }
    if (count==1){
        return result=indexx;
    }
    else{
        return result=-1 ;
    }
}