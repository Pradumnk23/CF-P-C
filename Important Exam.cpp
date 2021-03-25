#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(auto &x:s)
        cin>>x;
    lli ans=0;
    for(lli i=0;i <m; i++)
    {
        lli d;
        cin>>d;
        lli cnt[26]={0};
        for(auto x:s)
            cnt[x[i]-'A']++;
        sort(cnt, cnt+26);
        ans += d*cnt[25];
    }
    cout<<ans<<endl;
	return 0;
}
