#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPalindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    ll ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            ll prod = (ll)i * j;
            if (isPalindrome(to_string(prod))) {
                ans = max(ans, prod);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
