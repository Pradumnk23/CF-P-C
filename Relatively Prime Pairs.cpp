#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli l,r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(lli i=l; i<r; i+=2)
        cout<<i<<" "<<i+1<<endl;
}
