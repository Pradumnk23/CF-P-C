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
    vector < lli > v;
    lli a=1, b=1, c;
    v.push_back(1);
    for(lli i=3; i<=1000; i++)
    {
        c=a+b;
        v.push_back(c);
        a=b;
        b=c;
    }
    for(lli i=1; i<=n; i++)
    {
        if(count(v.begin(), v.end(), i))
            cout<<"O";
        else
            cout<<"o";
    }
    return 0;
}
