#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

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

    cout << fixed << setprecision(6);
    cout << p / t << endl;
    cout << n / t << endl;
    cout << z / t << endl;
}

int main() {
    vector<int> arr = {-4, 3, -9, 0, 4, 1};
    plusMinus(arr);
    return 0;
}
