#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,k,ans,nob,m,max=INT_MAX;
    cin>>n>>k;
    for(lli i=0; i<k; i++)
    {
        cin>>m;
        if((n%m)<max)
        {
            max=n%m;
            ans=i+1;
            nob=n/m;
        }
    }
    cout<<ans<<" "<<nob<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    long long int k;
    cin>>n>>k;
    unsigned long long int ans;
    unsigned long long int hamster_remained=1000000000000000000;
    unsigned long long int no_of_boxes;
    unsigned long long int m;
    for(long long int i=0;i<k;i++)
    {
        cin>>m;
        if(hamster_remained>(n%m))
        {
            hamster_remained=n%m;
            ans=i+1;
            no_of_boxes=(n/m);

        }
    }
    cout<<ans<<" "<<no_of_boxes;
}
*/
