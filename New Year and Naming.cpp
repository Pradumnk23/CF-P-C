#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,m;
    cin>>n>>m;
    string ns[n+1], ms[m+1];
    for(lli i=0; i<n; i++)
        cin>>ns[i];
    for(lli j=0; j<m; j++)
        cin>>ms[j];
    lli t;
    cin>>t;
    while(t--)
    {
        lli nos;
        cin>>nos;
        string sr = ns[(nos-1)%n]+ms[(nos-1)%m];
        cout<<sr<<endl;
    }
    return 0;
}
