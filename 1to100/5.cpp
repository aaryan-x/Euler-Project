#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll ans = 1;
    for (int i = 2; i <= 20; i++) {
        ans = lcm(ans, i);
    }
    cout << ans << endl;
    return 0;
}
