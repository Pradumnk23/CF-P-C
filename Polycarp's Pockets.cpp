#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;
 
int main()
{
    lli  n;
    cin>>n;
    lli a[n];
    for(lli i=0; i<n; i++)
        cin>>a[i];
    lli check[101]={};
    lli max=-1;
    for(lli i=0; i<n; i++)
    {
        (check[a[i]])++;
        if(check[a[i]]>max)
            max=check[a[i]];
    }
    cout<<max<<endl;
	return 0;
}
