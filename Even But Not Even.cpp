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
        lli n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for(lli i=0; i<n; i++)
        {
            lli digit=s[i]-'0';
            if(digit%2==1)
                ans+=s[i];
            if(ans.size()==2)
                break;
        }
        if(ans.size()==2)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;

    }
	return 0;
}
