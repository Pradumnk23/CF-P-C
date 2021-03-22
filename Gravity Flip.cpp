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
    for(lli i=0; i<n; i++)
        cout<<a[i]<<" ";

	return 0;
}
