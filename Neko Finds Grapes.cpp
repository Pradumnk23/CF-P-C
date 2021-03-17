#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,m;
    cin>>n>>m;
    lli a[n], b[m];
    lli oc=0, ec=0, ok=0, ek=0;
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==1)
            oc++;
        else
            ec++;
    }
    for(lli i=0; i<m; i++)
    {
        cin>>b[i];
        if(b[i]%2==1)
            ok++;
        else
            ek++;
    }
    lli cnt=0;
    if(ek>oc)
        cnt+=oc;
    else
        cnt+=ek;
    if(ok>ec)
        cnt+=ec;
    else
        cnt+=ok;
    cout<<cnt<<endl;
	return 0;
}
