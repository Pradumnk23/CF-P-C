#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n, s=0;
    cin>>n;
    lli a[n];
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    lli m,x;
    cin>>m;
    while(m--)
    {
        cin>>x;
        cout<<s-a[n-x]<<endl;
    }
	return 0;
}
