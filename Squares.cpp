#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,k;
    cin>>n>>k;
    lli a[n];
    for(lli i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    if(n<k)
        cout<<"-1"<<endl;
    else
        cout<<a[n-k]<<" "<<a[n-k]<<endl;

	return 0;
}
