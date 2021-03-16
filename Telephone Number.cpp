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
        lli n, cnt=0,ans=0;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='8' && n>=11)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(n<11)
            cout<<"NO"<<endl;
        else
        {
            if(n>=11)
            {
                for(lli i=0; i<=n-11; i++)
                {
                    if(s[i]=='8')
                        ans=1;
                }
                if(ans==1)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }

        }
    }
	return 0;
}
