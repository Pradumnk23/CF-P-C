#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
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

int main()
{
    fastio;
    lli n,m,x=0,y=0,num,pos[10000001];
    cin>>n;
    for(lli i=0; i<n; i++)
    {
        cin>>num;
        pos[num]=i+1;
    }
    cin>>m;
    for(lli i=0; i<m; i++)
    {
        cin>>num;
        x+=pos[num];
        y+=(n-pos[num]+1);
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
