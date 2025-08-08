int* countingSort(int arr_count, int* arr, int* result_count) {

   int *freq = (int*)calloc(100, sizeof(int));
    for(int i =0;i<arr_count;i++)
    {
       int val = arr[i];
        if (val >= 0 && val < 100) {
            freq[val]++;
     }
    }
    *result_count=100;
     return freq;
    }