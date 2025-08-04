void plusMinus(vector<int> arr) {

    float p = 0.0, n = 0.0, z = 0.0;
    float t = arr.size();

    for (int i = 0; i < t; i++) {
        if (arr[i] > 0)
            p++;
        else if (arr[i] < 0)
            n++;
        else
            z++;
    }

    printf("%.6f\n", p / t);
    printf("%.6f\n", n / t);
    printf("%.6f\n", z / t);
}
 