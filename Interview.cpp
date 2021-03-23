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
    lli a[n], b[n];
    for(lli i=0; i<n; i++)
        cin>>a[i];
    for(lli i=0; i<n; i++)
        cin>>b[i];
    lli sa=a[0], sb=b[0];
    for(lli i=0; i<n; i++)
    {
        sa |= a[i];
        sb |= b[i];
    }
    cout<<sa+sb<<endl;
	return 0;
}
