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
char s1[101],s2[101];
int main()
{
    fastio;
    /*cin>>s1>>s2;
    cout<<stricmp(s1,s2)<<endl;*/
    string s, t;
    cin >> s >> t;
    for(int i=0;i<SZ(s);++i) if(s[i]<='Z'&&s[i]>='A') s[i] += 32;
    for(int i=0;i<SZ(t);++i) if(t[i]<='Z'&&t[i]>='A') t[i] += 32;
    if(s<t) 
      cout << -1 << endl;
    else if(s==t) 
      cout << 0 << endl;
    else 
      cout << 1 << endl;
    return 0;
}
