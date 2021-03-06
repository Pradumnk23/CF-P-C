#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;
 
int main()
{
    lli yl,b;
    cin>>yl>>b;
    lli x, y, z;
    cin>>x>>y>>z;
    lli ans=0;
    lli ry=2*x+y-yl;
    lli rb=y+3*z-b;
    if(ry>0)
        ans+=ry;
    if(rb>0)
        ans+=rb;
    cout<<ans<<endl;
 
	return 0;
}
