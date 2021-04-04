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
        lli n,no=0,ne=0,mo=0,me=0;
        cin>>n;
        lli p[n];
        for(lli i=0; i<n; i++)
        {
            cin>>p[i];
            if(p[i]%2==0)
                ne++;
            else
                no++;
        }
        lli m;
        cin>>m;
        lli q[m];
        for(lli i=0; i<m; i++)
        {
            cin>>q[i];
            if(q[i]%2==0)
                me++;
            else
                mo++;
        }
        cout<<no*mo+ne*me<<endl;
    }
}
