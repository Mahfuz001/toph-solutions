//
//	litte_matrix_multiplication.cpp
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
    
    vector<int> vec;
    FORI(0,8){
        int x; cin >> x;
        vec.push_back(x);
    }
    int a,b,c,d;
    a = vec[0]*vec[4] + vec[1]*vec[6];
    b = vec[0]*vec[5] + vec[1]*vec[7];
    c = vec[2]*vec[4] + vec[3]*vec[6];
    d = vec[2]*vec[5] + vec[3]*vec[7];
    cout<< a << " " << b << " ";nl;
    cout<< c << " " << d;nl;
    return 0;
}