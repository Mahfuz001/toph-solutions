//
//	proper_leap_years.cpp
//
//
//	Created by Mahfuz Ahmed on 07/03/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define nl std::cout << "\n";
#define flush std::cout<<flush;
#define FORI(s,n) for(int i=s;i<n;i++)
#define FORJ(s,n) for(int j=s;j<n;j++)

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w","stdout");
    #endif
    int year;
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "Yes\n";
    }
    else
        cout << "No\n";

    return 0;
}