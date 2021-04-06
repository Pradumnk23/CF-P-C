#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,k,ans,nob,m,max=1000000000000000000;// max=INT_MAX not working bcz of constraint
    cin>>n>>k;
    for(lli i=0; i<k; i++)
    {
        cin>>m;
        if((n%m)<max)
        {
            max=n%m;
            ans=i+1;
            nob=n/m;
        }
    }
    cout<<ans<<" "<<nob<<endl;
    return 0;
}

