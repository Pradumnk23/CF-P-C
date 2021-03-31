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
    for(lli i=0; i<n; i++)
    {
        if(i==n-1)
        {
            cout<<a[0];
            break;
        }
        cout<<a[i+1]<<" ";
    }

	return 0;
}
