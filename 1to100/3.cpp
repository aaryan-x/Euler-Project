#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ll val = 600851475143, ans = 0;
    for (ll i = (ll)floor(sqrt(val)); i >= 2; i--){
        if (val % i == 0 && isPrime(i)) {
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;
    return 0;
}
