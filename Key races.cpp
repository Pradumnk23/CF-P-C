#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    lli tt1=2*t1+s*v1;
    lli tt2=2*t2+s*v2;
    if(tt1<tt2)
        cout<<"First"<<endl;
    else if(tt1>tt2)
        cout<<"Second"<<endl;
    else
        cout<<"Friendship"<<endl;
	return 0;
}
