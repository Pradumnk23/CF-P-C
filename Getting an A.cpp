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
    lli a[n], s=0, cnt=0;
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    double avg=double(s)/double(n);
    for(lli i=0; i<n; i++)
    {
        if(avg>=4.5)
            break;
        else
        {
            s+=(5-a[i]);
            a[i]=5;
            avg=double(s)/double(n);
            cnt++;
        }
    }
    cout<<cnt<<endl;

	return 0;
}
