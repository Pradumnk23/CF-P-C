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
    lli x[n],y[n], s=0;
    for(lli i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        if(x[i]+y[i]>s)
            s = x[i]+y[i];
    }
    cout<<s<<endl;
	return 0;
}
