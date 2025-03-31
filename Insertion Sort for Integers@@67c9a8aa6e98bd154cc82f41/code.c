int insertionSort(int arr[],int n){
    for (int i=1;i<n;i++){
        for (int j=i-1;j>=0;j--){
            if (arr[i]>arr[j]){
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
                break;
            }
        }
    }
}
int printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}