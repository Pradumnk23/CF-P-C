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
        lli n,k1,k2;
        cin>>n>>k1>>k2;
        lli w,b;
        cin>>w>>b;
        if((k1+k2)/2>=w && (2*n-(k1+k2))/2>=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
	return 0;
}
