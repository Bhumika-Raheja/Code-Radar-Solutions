int bubbleSort(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (arr[j]>arr[j-1]){
                int c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    return arr[n];
}
int printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        prinft("%d ".arr[i]);
    }
}