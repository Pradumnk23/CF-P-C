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
    lli  m[n], c[n];
    lli mishka=0, chris=0;
    for(lli i=0; i<n; i++)
    {
        cin>>m[i];
        cin>>c[i];
        if(m[i]>c[i])
            mishka+=1;
        else if(c[i]>m[i])
            chris+=1;
    }
    if(mishka>chris)
        cout<<"Mishka"<<endl;
    else if(chris>mishka)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
 
	return 0;
}
