#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a, b, ans = 1;
    cin>>a>>b;
    for (int i = 1; i <= min(a, b); i++) {
        ans *= i;
    }
    cout<<ans;
    return 0;
}
/* For finding GCD(a!, b!), let assume p=min(a,b) then gcd(a!,b!) = p!... */
