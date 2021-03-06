#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;
        for(int i=0; i<=1; ++i)
        for(int j=0; j<=1; ++j)
        for(int k=0; k<=1; ++k)
        for(int le=0; le<=1; ++le)
            if(i+j<=u&&i+j+n-2>=u
            &&j+k<=r&&j+k+n-2>=r
            &&k+le<=d&&k+le+n-2>=d
            &&le+i<=l&&le+i+n-2>=l){
                    puts("yes"); goto lend;
                }
        puts("no");
        lend:;
    }
	return 0;
}
