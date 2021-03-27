#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    lli o=0, t2=0, t3=0;
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            o++;
        else if(a[i]==2)
            t2++;
        else
            t3++;
    }
    cout<<n-max(o,max(t2,t3))<<endl;
	return 0;
}
