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
    lli a[5]={1,5,10,20,100};
    lli cnt=0;
    while(n>0)
    {
        for(lli i=4; i>=0; i--)
        {
            while(n>=a[i])
            {
                n-=a[i];
                cnt++;
            }
        }
    }
    cout<<cnt;
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int denominations[] = {100,20,10,5,1};       //denominations array in dec. order
int giveMinBills(int value){
  int counts = 0;
  for(int i=0;i<5;){
      if(value >= denominations[i]){       //taking higher values as much as possible.
         counts++;
         value-=denominations[i];
      }
      else{
      i++;                                            //not able to get higher value,move to lower value
      }
  }
  return counts;
}
int main(){
    int value;
    cin >> value;
    cout << giveMinBills(value);
    
}
*/
