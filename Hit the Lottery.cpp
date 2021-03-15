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
    lli a[5]={1,5,10,20,100};
    lli cnt=0;
    while(n>0)
    {
        for(lli i=4; i>=0; i--)
        {
            while(n>=a[i])
            {
                n-=a[i];
                cnt++;
            }
        }
    }
    cout<<cnt;
	return 0;
}
