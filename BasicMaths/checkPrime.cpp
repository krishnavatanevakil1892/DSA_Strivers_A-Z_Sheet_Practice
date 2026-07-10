#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;

            if (n / i != i)
            {
                cnt++;
            }
        }
    }
    return cnt == 2;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
