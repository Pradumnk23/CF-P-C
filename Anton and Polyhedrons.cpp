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
    lli sum=0;
    for(lli i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
            sum+=4;
        if(s=="Cube")
            sum+=6;
        if(s=="Octahedron")
            sum+=8;
        if(s=="Dodecahedron")
            sum+=12;
        if(s=="Icosahedron")
            sum+=20;
    }
    cout<<sum<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> stringValue;
    //here i am generating a hashmap having key as string and value as number of faces.
    stringValue["Cube"] = 6;
    stringValue["Tetrahedron"] = 4;
    stringValue["Octahedron"] = 8;
    stringValue["Dodecahedron"] = 12;
    stringValue["Icosahedron"] = 20;
    int numberOfPolygons;
    cin >> numberOfPolygons;
    int total_ans = 0;
    for(int i=0;i<numberOfPolygons;i++){
        string polygon;
        cin >> polygon;
        total_ans += stringValue[polygon];  //Accessing the value corresponding to key                                    
                                                                            polygon.    
   }
    cout << total_ans;
}
*/
