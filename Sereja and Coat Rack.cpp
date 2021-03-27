#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,d,s=0,s2=0;
    cin>>n>>d;
    lli a[n];
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    lli m;
    cin>>m;
    if(m>n)
        cout<<s-(m-n)*d<<endl;
    else if(n>m)
    {
        for(lli i=0; i<m; i++)
        {
            s2+=a[i];
        }
        cout<<s2<<endl;
    }
    else
        cout<<s<<endl;
	return 0;
}
