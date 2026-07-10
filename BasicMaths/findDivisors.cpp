#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> ans;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);

                if (n / i != i) {
                    ans.push_back(n / i);
                }
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    vector<int> result = obj.divisors(n);

    cout << "Divisors of " << n << " are: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
