#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    lli e=0, o=0, s=0;
    vector<lli>ev;
    vector<lli>od;
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            ev.push_back(a[i]);
            e++;
        }
        else
        {
            od.push_back(a[i]);
            o++;
        }
    }
    if(e==o)
        cout<<"0"<<endl;
    else
    {
        sort(ev.begin(), ev.end());
        sort(od.begin(), od.end());
        lli i=0;
        if(e>o)
        {
            lli element=e-o-1;
            while(element>i)
            {
                s+=ev[i];
                i++;
            }
            cout<<s<<endl;
        }
        else
        {
            lli element=o-e-1;
            while(element>i)
            {
                s+=od[i];
                i++;
            }
            cout<<s<<endl;
        }
    }

	return 0;
}
