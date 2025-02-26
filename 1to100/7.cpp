#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
static const int MAXN = 10000009;

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
    for (int i = 2; i < MAXN; i++) {
        if (!isComposite[i]) {
            primes.push_back(i);
        }
    }
  
    cout << primes[10000] << endl;
    return 0;
}
