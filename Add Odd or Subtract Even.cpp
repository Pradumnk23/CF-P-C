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
        lli a,b;
        cin>>a>>b;
        if(abs(a-b)%2==0 && a>b)
            cout<<"1"<<endl;
        else if(abs(a-b)%2==0 && a<b)
            cout<<"2"<<endl;
        else if(a==b)
            cout<<"0"<<endl;
        else if(abs(a-b)%2==1 && a>b)
            cout<<"2"<<endl;
        else if(abs(a-b)%2==1 && a<b)
            cout<<"1"<<endl;

    }
	return 0;
}
