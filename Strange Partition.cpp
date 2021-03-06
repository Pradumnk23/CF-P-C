#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
#define pb push_back
 
using namespace std;
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,x;
        cin>>n>>x;
        lli a[n];
        lli s=0,max=0,min=0;
        for(lli i=0; i<n; i++)
        {
            cin>>a[i];
            s += a[i];
            max += a[i]/x + (a[i]%x!=0);
        }
        min += s/x + (s%x!=0);
        /*lli minv=min/x, maxv=0;
        for(lli i=0; i<n; i++)
        {
            if(a[i]%x==0)
                maxv+=a[i]/x;
            else
                maxv+=((a[i]/x)+1);
        }*/
        cout<<min<<" "<<max<<endl;
 
    }
	return 0;
}
