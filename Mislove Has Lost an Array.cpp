#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,l,r;
    cin>>n>>l>>r;
    lli s1=0, s2=0, cnt1=0, i=0;
    while(cnt1<l)
    {
        s1+=pow(2,i);
        i++;
        cnt1++;
    }
    s1+=n-l;
    i=0;
    lli cnt2=0;
    while(cnt2<r)
    {
        s2+=pow(2,i);
        cnt2++;
        i++;
    }
    lli large=pow(2,r-1);
    s2+=(n-r)*large;
    cout<<s1<<" "<<s2<<endl;
	return 0;
}
