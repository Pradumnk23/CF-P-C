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
        vector<lli>v;
        lli pow=1;
        while(n>0)
        {
            if(n%10>0)
                v.push_back((n%10)*pow);
            n/=10;
            pow*=10;
        }
            cout<<v.size()<<endl;
            for(lli i=0; i<v.size(); i++)
                cout<<v[i]<<" ";
            cout<<endl;
    }
    return 0;
}
