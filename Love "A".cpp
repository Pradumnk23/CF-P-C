#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    lli cnt=0;
    for(lli i=0; i<s.length(); i++)
    {
        if(s[i]=='a')
            cnt++;
    }
    if(cnt>s.length()/2)
        cout<<s.length()<<endl;
    else
        cout<<2*cnt-1<<endl;
    return 0;
}
