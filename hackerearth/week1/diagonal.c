int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int d1 =0,d2=0;

    for (int i = 0; i < arr_rows; i++) {
        d1 += arr[i][i];                 
        d2 += arr[i][arr_columns - 1 - i];  
    }
    return abs(d1 - d2);

}