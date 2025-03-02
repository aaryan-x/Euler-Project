#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
static const int MAXN = 10000009;
const int MOD = 1e9+7;

void sieve(vector<bool> &isComposite) {
    isComposite[0] = true;
    isComposite[1] = true;
    for (int i = 2; i * i < (int)isComposite.size(); i++) {
        if (!isComposite[i]) {
            for (ll j = 1LL * i * i; j < (ll)isComposite.size(); j += i) {
                isComposite[j] = true;
            }
        }
    }
}

int main() {
    vector<bool> isComposite(MAXN, false);
    sieve(isComposite);
    vector<ll> primes;
    ll sum = 0;   
    for (int i = 2; i < 2000000; i++) {
        if (!isComposite[i]) {
            sum += i;
        }
    }
    cout<< sum <<endl;
    return 0;
}
