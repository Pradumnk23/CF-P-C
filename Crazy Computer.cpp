#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;
 
int main()
{
    lli n,c;
    cin>>n>>c;
    lli a[n];
    lli cnt=1;
    for(lli i=0; i<n; i++)
        cin>>a[i];
    for(lli i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]<=c)
            cnt++;
        if(a[i+1]-a[i]>c)
            cnt=1;
    }
    cout<<cnt<<endl;
    return 0;
}
