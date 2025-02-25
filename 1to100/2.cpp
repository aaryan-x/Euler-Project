#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll evenSum = 0, a = 1, b = 2;
    
    while(b <= 4000000){
        if (b%2 == 0) evenSum += b;
        
        long long next = a + b;
        a = b;
        b = next;
    }

    cout << evenSum << endl;
    return 0;
}
