#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;
 
int main()
{
    char a[3], b[3], c[3];
    for(lli i=0; i<3; i++)
        cin>>a[i];
    for(lli i=0; i<3; i++)
        cin>>b[i];
    for(lli i=0; i<3; i++)
        cin>>c[i];
    if(a[0]==c[2] && a[2]==c[0] && a[1]==c[1] && b[0]==b[2])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
	return 0;
  /*
  #include <bits/stdc++.h>
using namespace std;
int main() {
 char matrix[4][4];
 for(int i=1;i<=3;i++){
  for(int j=1;j<=3;j++){
      cin >> matrix[i][j];
   }    
 }
  //Coordinates to be checked : {(1,1) (3,3)} {(1,3) (3,1)} {(1,2) (3,2)} {(2,1) (2,3)}
  if(matrix[1][1] == matrix[3][3] && matrix[1][3] == matrix[3][1] && matrix[1][2] == matrix[3][2] && matrix[2][1] == matrix[2][3]){
      cout << "YES" << endl;
  }
  else{
      cout << "NO" << endl;
  } 
}
*/
