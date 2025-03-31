int insertionSort(int arr[],int n){
    for (int i=1;i<n;i++){
        for (int j=i;j>0;j--){
            if (arr[j]>arr[j-1]){
                int c=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=c;
            }
        }
    }
}
int printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}