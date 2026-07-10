#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {

        int dup = n;
        int revNum = 0;
        while(n > 0){
            int ld = n % 10;
            revNum = (revNum * 10) + ld;
            n = n / 10;
        }
        if(revNum == dup) return true;
        else return false;

}
