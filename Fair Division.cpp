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
        lli n;
        cin>>n;
        lli a[n];
        lli s=0, o=0;
        for(lli i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
            if(a[i]==1)
                o++;
        }
 
        if(s%2==0 && o>=2)
            cout<<"YES"<<endl;
        else if(o==0 && n%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
	return 0;
}
