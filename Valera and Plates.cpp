#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,m,k;
    cin>>n>>m>>k;
    lli a[n],p=0,b=0;
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            p++;
        else
            b++;
    }
    lli s=0;
    if(p>m)
    {
        s+=(p-m);
        m=0;
    }
    else
        m-=p;
    if(b>m+k)
        s+=b-m-k;
    cout<<s<<endl;
	return 0;
}
