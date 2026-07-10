class Solution {
public:
    int countDigit(int n) {
        int cnt = (int)(log10(n) + 1);
        return cnt;
    }
};

//bruteforce approch
int count(int n){
    int ld = 0;
    int cnt = 0;
    while(n > 0){
        ld = n % 10;
        n = n / 10;
        cnt++;
    }
    return cnt;
}
