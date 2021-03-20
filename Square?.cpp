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
        lli a1,b1;
        cin>>a1>>b1;
        lli a2,b2;
        cin>>a2>>b2;
        if(max(a1,b1)==max(a2,b2))
        {
            if((min(a2,b2)+min(a1,b1))==max(a1,b1))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
