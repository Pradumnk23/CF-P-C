#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int t,n,s,a[105],b[105],p[105];
main()
{
    for(cin>>t;t--;)
    {
        cin>>n;
        for(lli i=1; i<=n; i++)cin>>a[i]>>b[i];
        for(lli i=1; i<=n; i++)cin>>p[i];
        s=0;
        for(lli i=0; i<n; i++)
        {
            s=max(s+(b[i]-a[i]+1)/2,b[i]);
            s+=a[i+1]-b[i]+p[i+1];
        }
        cout<<s<<endl;
    }
    return 0;
}
