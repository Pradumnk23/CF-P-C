#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

#define mp                  make_pair
#define pb                  push_back
#define lli                 long long int
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define ld                  long double
#define all(x)              x.begin(),x.end()
#define fn                  for(lli i=0;i<n;i++)
#define rep(i,a,b)          for(lli i=a;i<b;i++)
#define repo(i,a,b)         for(lli i=a;i>=b;i--)
#define test()              lli test; cin>>test; while(test--)
#define fi                  first
#define se                  second
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define sp(x)               fixed << setprecision(x)
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    fastio;
    lli n,xn=0,yn=0,zn=0;
    cin>>n;
    lli x[n],y[n],z[n];
    for(lli i=0; i<n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        xn+=x[i];
        yn+=y[i];
        zn+=z[i];
    }
    if(xn==0 && yn==0 && zn==0) // sum of x,y,x should be 0 to be in eqm
        yes;
    else
        no;
    return 0;
}
