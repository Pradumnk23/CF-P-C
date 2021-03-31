#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli n,cnt=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(isdigit(s[0]))
        {
            if(stoi(s<18)
                cnt++;
        }
        else if(s=="ABSINTH"||s=="BEER"||s=="BRANDY"||s=="CHAMPAGNE"||s=="GIN"||s=="RUM"||s=="SAKE"||s=="TEQUILA"||s=="VODKA"||s=="WHISKEY"||s=="WINE")
			cnt++;
    }
    cout<<cnt<<endl;

	return 0;
}
