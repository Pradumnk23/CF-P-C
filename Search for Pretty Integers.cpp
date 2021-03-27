#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

lli n, m, a, x=9, y=9, v[15];
int main()
{
    cin>>n>>m;
    while(n--)
    {
        cin>>a;
        x=min(x,a);
        v[a]++;
    }
    while(m--)
    {
        cin>>a;
        y=min(y,a);
        v[a]++;
    }
    for(lli i=1; i<=9; i++)
    {
        if(v[i]==2)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<min(x,y)<<max(x,y)<<endl;
	return 0;
}
