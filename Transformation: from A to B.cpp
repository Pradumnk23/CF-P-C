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
        if(b%2==1)  //(b&1) is same
        {
            if(b%10==1) // this means unit digit is 1 so that we can sub -1 and then divide by 10
                b=(b-1)/10;
            else{cout<<"NO"<<endl;return 0;}
        }
        else
            b=b/2;   // b>>=1; is same
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
