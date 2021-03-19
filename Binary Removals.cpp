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
        string s;
        cin>>s;
        lli n=s.length();
        lli i=0;
        for(; i<n-1; i++)
        {
            if(s[i]=='1' && s[i+1]=='1')
                break;
        }
        for(; i<n-1; i++)
        {
            if(s[i]=='0' && s[i+1]=='0')
                break;
        }
        if(i==n-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
