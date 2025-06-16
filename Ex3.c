int* mallocArray(int n){
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        arr[i] = 0;
    }
    return arr;
}

//Độ phức tạp của thời gian là O(n)