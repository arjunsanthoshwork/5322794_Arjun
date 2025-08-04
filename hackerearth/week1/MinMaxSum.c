void miniMaxSum(vector<int> arr) {
    
 long long min = 0, max = 0;
    int siz = arr.size();

    sort(arr.begin(), arr.end());

    for (int j = 0; j < siz - 1; j++) {
        min += arr[j];
    }

    for (int k = 1; k < siz; k++) {
        max += arr[k];
    }

    printf("%lld %lld\n", min, max);
}
