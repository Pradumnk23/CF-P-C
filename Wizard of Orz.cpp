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
        if(n==1)
            cout<<9;
        else if(n==2)
            cout<<9<<8;
        else if(n==3)
            cout<<9<<8<<9;
        else
        {
            cout<<9<<8<<9;
            for(lli i=3; i<n; i++)
            {
                cout<<(i-3)%10;
            }
        }
        cout<<endl;
    }
 
	return 0;
}
