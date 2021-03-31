#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli a,b;
    cin>>a>>b;
    lli ans=a;
    while(a>=b)
    {
        ans+=a/b;
        a=a/b+a%b;
    }
    cout<<ans<<endl;

	return 0;
}
