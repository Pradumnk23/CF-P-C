#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli a,b,c=1,r[100];
    cin>>a>>b;
    r[0]=b;
    while(b>a)
    {
        if(b%2==1)  //(b&1)
        {
            if(b%10==1)
                b=(b-1)/10;
            else{cout<<"NO"<<endl;return 0;}
        }
        else
            b=b/2;   // b>>=1;
        r[c]=b;
        c++;
    }
    if(b==a)
    {
        cout<<"YES"<<endl<<c;
        while(c--)
            cout<<" "<<r[c];
    }
    else
        cout<<"NO";
	return 0;
}
