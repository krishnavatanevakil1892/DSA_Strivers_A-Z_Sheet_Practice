#include <bits/stdc++.h>
using namespace std;

// bool armstrongNum(int n)
// {
//     int original = n;
//     int armstrongSum = 0;

//     while (n > 0)
//     {
//         int ld = n % 10;
//         armstrongSum += ld * ld * ld;
//         n /= 10;
//     }

//     return armstrongSum == original;
// }


bool armstrongNum(int n) {
    int original = n;
    int digits = to_string(n).length();
    int armstrongSum = 0;

    while (n > 0) {
        int ld = n % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= ld;
        }

        armstrongSum += power;
        n /= 10;
    }

    return armstrongSum == original;
}

int main() {
    int n;
    cin >> n;

    if (armstrongNum(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
