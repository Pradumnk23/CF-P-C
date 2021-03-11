#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,m;
        cin>>n>>m;
        lli a[n];
        lli s=0;
        for(lli i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s>=m)
            cout<<m<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
