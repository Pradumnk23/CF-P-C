#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    string str;
    cin>>str;
    string s;
    /*for(int i=0; i<n; i++)
        cin>>s[i];*/
    lli c=0;
    for(int i=0; i<5; i++)
    {
        cin>>s;
        if(str[0]==s[0] || str[1]==s[1])
            c=1;
    }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;                      
    cin>>input;
    vector<string> my_cards(5);        
    for(int i=0;i<5;i++)
        cin>>my_cards[i];
    bool found = false;     

    for(int i = 0;i<5;i++)    
    {
            if(input[0]==my_cards[i][0] or input[1]==my_cards[i][1])   // IMP Step ..using string[number][and which position that is 0 or 1 bcz string has 2 character]
           {                                                  
                cout<<"YES";                           
                found = true;                                           
                break;                                                  
           }
    }
    if(found==false)        
        cout<<"NO";

    return 0;
}
*/
