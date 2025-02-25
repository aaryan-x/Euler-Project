#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll squareProduct(ll n){
  return (n*(n+1)*(2*n+1))/6;
} 

ll digitSum(ll n){
  return (n*(n+1))/2;
}

int main() {
    ll ans = (digitSum(100)*digitSum(100))-squareProduct(100);
    cout<<ans<<endl;
    return 0;
}
