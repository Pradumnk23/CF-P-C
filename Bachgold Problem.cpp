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
    vector<int>v;
    if(n%2==1)
    {
        v.push_back(3);
        n-=3;
    }
    while(n>0)
    {
        v.push_back(2);
        n-=2;
    }
    cout<<v.size()<<endl;
    for(auto& i:v)
        cout<<i<<" ";



    return 0;
}
// Max prime no means check if n%2==1 add 3 otherwise add 2,2, till n!=0
