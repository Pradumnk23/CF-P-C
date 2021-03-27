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
    for(lli i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    lli s1=0, s2=0;
    for(lli i=n/2; i<n; i++)
        s1+=a[i];
    for(lli i=0; i<n/2; i++)
        s2+=a[i];
    cout<<s1*s1+s2*s2<<endl;
	return 0;
}
