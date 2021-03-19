#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,k;
    cin>>n>>k;
    lli odd=(n+1)/2;
    lli even=n/2;
    if(k<=odd)
        cout<<2*k-1<<endl;
    else
        cout<<(k-odd)*2<<endl;

	return 0;
}
