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
        if(n%2==0)
        {
            for(lli i=0; i<n/2; i++)
                cout<<"1";
        }
        else
        {
            cout<<"7";
            for(lli i=0; i<(n-3)/2; i++)
                cout<<"1";
        }
        cout<<endl;
    }
	return 0;
}
