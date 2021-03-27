#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k>n/2)
    {
        while(k!=n)
        {
            cout<<"RIGHT"<<endl;
            k++;
        }
        for(lli i=n; i>=2; i--)
        {
            cout<<"PRINT"<<" "<<s[i-1]<<endl;
            cout<<"LEFT"<<endl;
        }
        cout<<"PRINT"<<" "<<s[0]<<endl;
    }
    if(k<=n/2)
    {
        while(k!=1)
        {
            cout<<"LEFT"<<endl;
            k--;
        }
        for(lli i=1; i<n; i++)
        {
            cout<<"PRINT"<<" "<<s[i-1]<<endl;
            cout<<"RIGHT"<<endl;
        }
        cout<<"PRINT"<<" "<<s[n-1]<<endl;
    }
	return 0;
}
