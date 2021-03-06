#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli p,a,b,c;
        cin>>p>>a>>b>>c;
        cout<<min((a-p%a)%a,min((b-p%b)%b,(c-p%c)%c))<<"\n";
    }
	return 0;
}
