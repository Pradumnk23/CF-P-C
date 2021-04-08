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
        lli n,m,x;
        cin>>n>>m>>x;
        cout<<((x-1)/n)+1+((x-1)%n)*m<<"\n";
    }
    return 0;
}
