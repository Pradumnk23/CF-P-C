#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    double n;
    lli x,y;
    cin>>n>>x>>y;
    if(floor((x*100)/n)>=y)
        cout<<"0"<<endl;
    else
        cout<<ceil((y*n)/100)-x<<endl;
	return 0;
}
