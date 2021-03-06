#include <string>
#define lli long long int
using namespace std;
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli w,h,n;
        cin>>w>>h>>n;
        lli ans = w*h;
        lli cnt=1, flag=0;
        while(ans%2==0)
        {
            ans = ans/2;
            cnt=cnt*2;
        }
        if(cnt>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
	return 0;
}
