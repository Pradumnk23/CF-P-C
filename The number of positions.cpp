    #include <bits/stdc++.h>
    #include <math.h>
    #include<algorithm>
    #include <vector>
    #include <string>
    #define lli long long int
    using namespace std;

    int main()
    {
        lli n,a,b;
        cin>>n>>a>>b;
        if(a+b<n)
            cout << b+1 <<endl;
        else if(a+b == n)
            cout << b <<endl;
        else
            cout <<n-a<<endl;
        return 0;
    }
