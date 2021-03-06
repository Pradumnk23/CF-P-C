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
        lli n,x;
        cin>>n>>x;
        lli a[n],s=0;
        for(lli i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        lli i=0, l=x;
        while(a[i]%x==0)
        {
            if(a[i]%x==0)
            {
                a[i]=a[i]/x;
                s+=l*a[i];
                i++;
            }
            if(i==n)
            {
                i=0;
                l=l*x;
            }
        }
        cout<<s<<endl;
    }
 
	return 0;
}
