#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli t,n,k;
    cin>>t;
    for(lli i=0; i<t; i++)
    {
        cin>>n>>k;
        lli cnt=0;
        while(n>0)
        {
            if(n%k==0)
            {
                n/=k;
                cnt++;
            }
            else
            {
                lli rem=n%k;
                cnt+=rem;
                n-=rem;
            }
        }
        cout<<cnt<<endl;
    }
	return 0;
}
