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
    string s;
    for(lli i=1; i<=n; i++)
        s+=to_string(i);
    cout<<s[n-1];
	return 0;
}
