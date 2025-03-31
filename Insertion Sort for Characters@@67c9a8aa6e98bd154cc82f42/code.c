char insertionSort(char arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                char c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
}
char printArray(char arr[],int n){
    for (int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}