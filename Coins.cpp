#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;

    int ans=s/n;
    if((s%n)!=0)
    {
        ans=ans+1;
    }
    cout<<ans<<endl;
	return 0;
}
