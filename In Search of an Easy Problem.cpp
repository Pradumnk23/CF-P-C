#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;
 
int main()
{
    lli n,x;
    cin>>n;
    lli q=0;
    while(n--)
    {
        cin>>x;
        if(x==1)
        {
            q=1;
            break;
        }
    }
    if(q==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
 
	return 0;
}
// only check q==1 :-)
